from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.conditions import IfCondition, UnlessCondition

def generate_launch_description():
    # Argumentos de lanzamiento
    port_arg = DeclareLaunchArgument(
        'port',
        default_value='/dev/ttyUSB0',
        description='Puerto serie para comunicación con los motores'
    )
    
    baudrate_arg = DeclareLaunchArgument(
        'baudrate',
        default_value='8000000',
        description='Tasa de baudios para comunicación serial'
    )
    
    motor_ids_arg = DeclareLaunchArgument(
        'motor_ids',
        default_value='[1]',
        description='Lista de IDs de motores a los que hacer ping'
    )
    
    debug_arg = DeclareLaunchArgument(
        'debug',
        default_value='false',
        description='Habilitar mensajes de depuración detallados'
    )
    
    # Crear nodo
    node = Node(
        package='westwood_motor_control_sdk_wrapper',
        executable='westwood_motor_server.py',
        name='westwood_motor_server',
        output='screen',
        emulate_tty=True,
        parameters=[{
            'port': LaunchConfiguration('port'),
            'baudrate': LaunchConfiguration('baudrate'),
            'motor_ids': LaunchConfiguration('motor_ids'),
            'debug': LaunchConfiguration('debug')
        }]
    )
    
    return LaunchDescription([
        port_arg,
        baudrate_arg,
        motor_ids_arg,
        debug_arg,
        node
    ]) 