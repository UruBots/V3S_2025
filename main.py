from evdev import InputDevice, categorize, ecodes
import threading
import serial

port = input('Ingrese la puerta del arduino /dev/tty')

arduino_port = '/dev/tty' + str(port)  # Reemplaza 'COMX' con el puerto real de tu Arduino
baud_rate = input('ingrese el baudrate: ')

try:
    ser = serial.Serial(arduino_port, baud_rate)
    print('Conexion con exito')
except serial.SerialException:
    print(f"No se pudo abrir el puerto {arduino_port}. Asegúrate de que el Arduino esté conectado correctamente.")
    port = input('Ingrese la puerta del arduino /dev/tty')
    arduino_port = '/dev/tty' + str(port)  # Reemplaza 'COMX' con el puerto real de tu Arduino
    baud_rate = input('ingrese el baudrate: ')
    


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
            data = '1' + ',' + str(pwm1) + ',' + str(pwm2) + ',' + str(pwm3) + ',' + str(pwm4)
            print(data.encode('utf-8'))
        elif abajo == 1:
            pwm1 = 0
            pwm2 = 150
            pwm3 = 0
            pwm4 = 150
            data = '1' + ',' + str(pwm1) + ',' + str(pwm2) + ',' + str(pwm3) + ',' + str(pwm4)
            print(data.encode('utf-8'))
        elif derecha == 1:
            pwm1 = 0
            pwm2 = 50
            pwm3 = 150
            pwm4 = 0
            data = '1' + ',' + str(pwm1) + ',' + str(pwm2) + ',' + str(pwm3) + ',' + str(pwm4)
            print(data.encode('utf-8'))
        elif izquierda == 1:
            pwm1 = 150
            pwm2 = 0
            pwm3 = 0
            pwm4 = 50
            data = '1' + ',' + str(pwm1) + ',' + str(pwm2) + ',' + str(pwm3) + ',' + str(pwm4)
            print(data.encode('utf-8'))



# Función para manejar eventos de otro dispositivo (puedes modificarla según tus necesidades)
def leer_otro_dispositivo(dispositivo):
    for event in dispositivo.read_loop():
        if event.type == ecodes.EV_KEY:
            if event.code == b_one and event.value == 1:
                print("pressionaste el boton one")
        # Aquí procesas los eventos del otro dispositivo
        print(event)

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
