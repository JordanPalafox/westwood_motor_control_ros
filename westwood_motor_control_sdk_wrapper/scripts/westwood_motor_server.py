#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from westwood_motor_interfaces.srv import SetMotorIdAndTarget
import sys
import os

# Verificar si el módulo está disponible en el sistema
try:
    import westwood_motor_control_sdk_wrapper
except ImportError:
    # Si no está disponible, intentar importarlo desde la ruta relativa al script
    package_path = os.path.abspath(os.path.join(os.path.dirname(__file__), '..'))
    if package_path not in sys.path:
        sys.path.insert(0, package_path)
    
    # Intenta importar de nuevo
    try:
        import westwood_motor_control_sdk_wrapper
        from westwood_motor_control_sdk_wrapper import Manager
    except ImportError as e:
        print(f"Error al importar el módulo: {e}")
        print(f"Rutas de Python: {sys.path}")
        raise
else:
    # Si está disponible, importa los componentes
    from westwood_motor_control_sdk_wrapper import Manager

class WestwoodMotorServer(Node):
    def __init__(self):
        super().__init__('westwood_motor_server')
        self.get_logger().info('Westwood Motor Server started')
        
        # Parámetros configurables - por defecto busca en el puerto USB0
        self.declare_parameter('port', '/dev/ttyUSB0')
        self.declare_parameter('baudrate', '8000000')
        self.declare_parameter('motor_ids', [1])
        self.declare_parameter('debug', False)
        
        # Obtener parámetros
        self.port = self.get_parameter('port').value
        self.baudrate = self.get_parameter('baudrate').value
        self.motor_ids = self.get_parameter('motor_ids').value
        self.debug = self.get_parameter('debug').value
        
        # Inicializar el Manager de PyBear
        try:
            self.manager = Manager(
                port=self.port,
                baudrate=self.baudrate,
                debug=self.debug
            )
            self.get_logger().info('Manager de PyBear inicializado correctamente')
            self.get_logger().info(f'Puerto: {self.port}, Baudrate: {self.baudrate}')
        except Exception as e:
            self.get_logger().error(f'Error al inicializar Manager de PyBear: {str(e)}')
            self.manager = None
        
        # Añadir el servicio para manejar múltiples motores con posiciones
        try:
            self.set_motor_id_and_target_service = self.create_service(
                SetMotorIdAndTarget,
                'westwood_motor/set_motor_id_and_target',
                self.handle_motor_ids_and_target
            )
            self.get_logger().info('Servicio de control multi-motor con arrays registrado correctamente')
        except Exception as e:
            self.get_logger().error(f'Error al registrar servicio multi-motor con arrays: {str(e)}')

    # Función principal para manejar IDs de motores y sus posiciones objetivo
    def handle_motor_ids_and_target(self, request, response):
        """Callback para controlar múltiples motores con posiciones objetivo individuales"""
        try:
            if self.manager is None:
                response.success = False
                response.message = "No hay conexión con el gestor de motores"
                return response
            
            # Si no hay motores especificados, no hay nada que hacer
            if not request.motor_ids or len(request.motor_ids) == 0:
                response.success = False
                response.message = "No se especificaron IDs de motores"
                return response
            
            # Si la cantidad de motores no coincide con la cantidad de posiciones
            if len(request.motor_ids) != len(request.target_positions):
                response.success = False
                response.message = "La cantidad de IDs de motores no coincide con la cantidad de posiciones objetivo"
                return response
            
            # Verificar conexión de cada motor y preparar lista de motores conectados
            connected_motors = []
            failed_motor_ids = []
            for motor_id in request.motor_ids:
                ping_result = self.manager.ping(motor_id)
                if ping_result:
                    connected_motors.append(motor_id)
                    self.get_logger().info(f'Motor {motor_id} conectado y listo para control')
                else:
                    failed_motor_ids.append(motor_id)
                    self.get_logger().warning(f'Motor {motor_id} no responde')
            
            if not connected_motors:
                response.success = False
                response.message = "Ninguno de los motores especificados está conectado"
                return response
            
            # Configurar PID y modo para cada motor (valores fijos basados en set_position.py)
            p_gain = 5.0  # Set P gain as spring stiffness
            d_gain = 0.2  # Set D gain as damper strength
            i_gain = 0.0  # I gain is usually not needed
            iq_max = 1.5  # Max iq
            
            # Lista para almacenar posiciones anteriores
            previous_positions = []
            
            # Para cada motor conectado, configurar y mover
            for i, motor_id in enumerate(connected_motors):
                if motor_id not in request.motor_ids:
                    continue  # Saltar si el motor ya no está en la lista original
                
                # Obtener el índice del motor en la lista original
                idx = request.motor_ids.index(motor_id)
                
                try:
                    # Configurar PID para el control de posición
                    # PID id/iq
                    self.manager.set_p_gain_iq((motor_id, 0.02))
                    self.manager.set_i_gain_iq((motor_id, 0.02))
                    self.manager.set_d_gain_iq((motor_id, 0))
                    self.manager.set_p_gain_id((motor_id, 0.02))
                    self.manager.set_i_gain_id((motor_id, 0.02))
                    self.manager.set_d_gain_id((motor_id, 0))
                    
                    # PID position mode
                    self.manager.set_p_gain_position((motor_id, p_gain))
                    self.manager.set_i_gain_position((motor_id, i_gain))
                    self.manager.set_d_gain_position((motor_id, d_gain))
                    
                    # Poner en modo posición
                    self.manager.set_mode((motor_id, 2))
                    
                    # Establecer límite de corriente
                    self.manager.set_limit_iq_max((motor_id, iq_max))
                    
                    # Leer posición actual y guardarla en la lista
                    current_position_result = self.manager.get_present_position(motor_id)
                    if current_position_result and len(current_position_result) > 0:
                        current_position = float(current_position_result[0][0][0])
                        previous_positions.append(current_position)
                        
                        # Establecer posición inicial antes de habilitar torque
                        self.manager.set_goal_position((motor_id, current_position))
                        
                        # Habilitar torque
                        self.manager.set_torque_enable((motor_id, 1))
                        
                        # Mover a la posición objetivo (de manera suave, dividiendo en 100 pasos)
                        target_position = request.target_positions[idx]
                        num_steps = 100
                        delta = (target_position - current_position) / num_steps
                        
                        for step in range(num_steps):
                            goal_pos = current_position + delta * (step + 1)
                            self.manager.set_goal_position((motor_id, goal_pos))
                            
                    else:
                        failed_motor_ids.append(motor_id)
                        connected_motors.remove(motor_id)
                        previous_positions.append(0.0)  # Valor por defecto si no se pudo leer
                        
                except Exception as e:
                    self.get_logger().error(f'Error al configurar/mover motor {motor_id}: {str(e)}')
                    failed_motor_ids.append(motor_id)
                    if motor_id in connected_motors:
                        connected_motors.remove(motor_id)
                    if len(previous_positions) < i + 1:
                        previous_positions.append(0.0)  # Valor por defecto si hubo error
            
            # Preparar respuesta
            response.success = len(connected_motors) > 0
            response.message = f"Control exitoso de {len(connected_motors)} motores"
            if failed_motor_ids:
                response.message += f". {len(failed_motor_ids)} motores fallaron: {failed_motor_ids}"
            
            # Asegurar que previous_positions tiene la misma longitud que request.motor_ids
            while len(previous_positions) < len(request.motor_ids):
                previous_positions.append(0.0)
            
            response.previous_positions = previous_positions
            
            return response
            
        except Exception as e:
            self.get_logger().error(f'Error en servicio multi-motor: {str(e)}')
            response.success = False
            response.message = f"Error: {str(e)}"
            response.previous_positions = [0.0] * len(request.motor_ids)  # Lista de ceros como fallback
            return response

def main():
    rclpy.init()
    node = WestwoodMotorServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(f"Error en la ejecución: {str(e)}")
        import traceback
        print(traceback.format_exc())
    finally:
        if hasattr(node, 'manager') and node.manager is not None:
            try:
                node.manager.close()
            except Exception as e:
                print(f"Error al cerrar el manager: {str(e)}")
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main() 