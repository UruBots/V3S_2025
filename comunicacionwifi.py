from pyModbusTCP.client import ModbusClient #pip install pyModbusTCP
from evdev import InputDevice, categorize, ecodes
import threading

SERVER_HOST = "192.168.137.23"
SERVER_PORT = 502
ID_REG = 0
PWM1_REG = 1
PWM2_REG = 2
PWM3_REG = 3
PWM4_REG = 4
client = ModbusClient(host= SERVER_HOST, port=SERVER_PORT, auto_open=True, debug=False)

jos = input("ingrese el numero del evento de los joystick: ")
boot = input("ingrese el numero del evento de los botones: ")
right = 163
left = 165
up = 115
down = 114
b_one = 305


# Función para manejar eventos del joystick
def leer_joystick(joystick):
    derecha = 0
    izquierda = 0
    arriba = 0
    abajo = 0 

    for event in joystick.read_loop():
        if event.type == ecodes.EV_KEY:
            if event.code == right and event.value == 0:
                derecha = 0
                print(derecha)
            elif event.code == right and event.value == 1:
                derecha = 1
                print(derecha)
                #
            elif event.code == left and event.value == 0:
                izquierda = 0
                print(izquierda)
            elif event.code == left and event.value == 1:
                izquierda = 1
                print(izquierda)
                #
            elif event.code == up and event.value == 0:
                arriba = 0
                print(arriba)
            elif event.code == up and event.value == 1:
                arriba = 1
                print(arriba)
                #
            elif event.code == down and event.value == 0:
                abajo = 0
                print(abajo)
            elif event.code == down and event.value == 1:
                abajo = 1
                print(abajo)
        # Aquí procesas los eventos del joystick
        if arriba == 1:
            pwm1 = 150
            pwm2 = 0
            pwm3 = 150
            pwm4 = 0
            id = 1
            client.write_single_register(ID_REG, id)
            client.write_single_register(PWM1_REG, pwm1)
            client.write_single_register(PWM2_REG, pwm2)
            client.write_single_register(PWM3_REG, pwm3)
            client.write_single_register(PWM4_REG, pwm4)
        elif abajo == 1:
            pwm1 = 0
            pwm2 = 150
            pwm3 = 0
            pwm4 = 150
            id = 1
            client.write_single_register(ID_REG, id)
            client.write_single_register(PWM1_REG, pwm1)
            client.write_single_register(PWM2_REG, pwm2)
            client.write_single_register(PWM3_REG, pwm3)
            client.write_single_register(PWM4_REG, pwm4)
        elif derecha == 1:
            pwm1 = 0
            pwm2 = 50
            pwm3 = 150
            pwm4 = 0
            id = 1
            client.write_single_register(ID_REG, id)
            client.write_single_register(PWM1_REG, pwm1)
            client.write_single_register(PWM2_REG, pwm2)
            client.write_single_register(PWM3_REG, pwm3)
            client.write_single_register(PWM4_REG, pwm4)
        elif izquierda == 1:
            pwm1 = 150
            pwm2 = 0
            pwm3 = 0
            pwm4 = 50
            id = 1
            client.write_single_register(ID_REG, id)
            client.write_single_register(PWM1_REG, pwm1)
            client.write_single_register(PWM2_REG, pwm2)
            client.write_single_register(PWM3_REG, pwm3)
            client.write_single_register(PWM4_REG, pwm4)



# Función para manejar eventos de otro dispositivo (puedes modificarla según tus necesidades)
def leer_otro_dispositivo(dispositivo):
    for event in dispositivo.read_loop():
        if event.type == ecodes.EV_KEY:
            if event.code == b_one and event.value == 1:
                print("Comunicacion MDBus desactivada")
                client.close()


# Abre el dispositivo del joystick
joystick_path = "/dev/input/event" + str(jos)  # Reemplaza "eventX" con el nombre correcto de tu dispositivo
joystick = InputDevice(joystick_path)

botton_path = "/dev/input/event" + str(boot)
botton = InputDevice(botton_path)

# Abre otro dispositivo (si es necesario)
# otro_dispositivo = InputDevice("/dev/input/otro_evento")

# Crea hilos para leer los eventos de los dispositivos
hilo_joystick = threading.Thread(target=leer_joystick, args=(joystick,))
hilo_botton = threading.Thread(target=leer_otro_dispositivo, args=(botton,))

# Inicia los hilos
hilo_joystick.start()
hilo_botton.start()

# Espera a que los hilos terminen (puedes agregar esto si necesitas que el programa no termine inmediatamente)
hilo_joystick.join()
hilo_botton.join()


