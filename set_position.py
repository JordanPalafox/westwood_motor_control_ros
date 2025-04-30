#!usr/bin/env python
__author__ = "Xiaoguang Zhang"
__email__ = "xzhang@westwoodrobotics.io"
__copyright__ = "Copyright 2020 Westwood Robotics"
__date__ = "Aug 20, 2020"
__version__ = "0.1.0"
__status__ = "Production"

# -----------------------------
# Move BEAR from the current angle to a specified angle
# For more details, please check the SDK manual (https://www.westwoodrobotics.io/support/)

from pybear import Manager
import time

error = False
bear = Manager.BEAR(port="/dev/ttyUSB1", baudrate=8000000)  # need to identify the port name on your PC

m_ids = [1, 6]  # BEAR IDs (1 and 6)

p_gain = 5.0  # Set P gain as spring stiffness
d_gain = 0.2  # Set D gain as damper strength
i_gain = 0.0  # I gain is usually not needed
iq_max = 1.5  # Max iq

# Verificar conexión de ambos dispositivos
all_connected = True
for m_id in m_ids:
    BEAR_connected = bear.ping(m_id)
    print(f"BEAR {m_id} conectado: {BEAR_connected}")
    if not BEAR_connected:
        # BEAR is offline
        print(f"BEAR {m_id} está desconectado. Verifique la energía y comunicación.")
        all_connected = False

if not all_connected:
    error = True
    exit()

if not error:
    # BEAR is online
    # Set PID, mode, and limit
    print("¡Bienvenido a bordo, Capitán!")
    
    for m_id in m_ids:
        # PID id/iq
        bear.set_p_gain_iq((m_id, 0.02))
        bear.set_i_gain_iq((m_id, 0.02))
        bear.set_d_gain_iq((m_id, 0))
        bear.set_p_gain_id((m_id, 0.02))
        bear.set_i_gain_id((m_id, 0.02))
        bear.set_d_gain_id((m_id, 0))

        # PID position mode
        bear.set_p_gain_position((m_id, p_gain))
        bear.set_i_gain_position((m_id, i_gain))
        bear.set_d_gain_position((m_id, d_gain))

        # Put into position mode
        bear.set_mode((m_id, 2))

        # Set iq limit
        bear.set_limit_iq_max((m_id, iq_max))

    # Start demo
    input('Presione Enter para iniciar la demostración. ')

    # Get home position for each BEAR
    home_positions = {}
    for m_id in m_ids:
        home_positions[m_id] = bear.get_present_position(m_id)[0][0][0]
        print(f"Posición inicial BEAR {m_id}: {home_positions[m_id]}")

    # Set goal position before enabling BEARs
    for m_id in m_ids:
        bear.set_goal_position((m_id, home_positions[m_id]))

    # Enable BEARs
    for m_id in m_ids:
        bear.set_torque_enable((m_id, 1))

    # Demo spring-damping system
    print('¡Puedes jugar con los BEARs ahora! Están simulando un sistema de amortiguación de resorte.')
    time.sleep(2)

    # Get command position
    angle = float(input('Ingrese el ángulo en radianes al que desea mover los BEARs (ej., -0.2): '))

    # Let's move to the target angle smoothly
    num = 100                  # split it into 100 pieces
    delta_angle = angle / num  # angle for each time
    for i in range(num):
        for m_id in m_ids:
            goal_pos = home_positions[m_id] + delta_angle * (i + 1)
            bear.set_goal_position((m_id, goal_pos))
        time.sleep(0.01)

    print('¡Los BEARs llegaron al ángulo objetivo!')
    time.sleep(2)

    # Turn off BEARs
    input('Presione Enter para apagar los BEARs.')

    # Disable BEARs
    for m_id in m_ids:
        bear.set_torque_enable((m_id, 0))
    print("¡Gracias por usar BEAR!")
