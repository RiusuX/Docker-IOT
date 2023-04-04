import time
import serial
import paho.mqtt.client as mqtt

ser = serial.Serial(
    port='/dev/rfcomm0',
    baudrate=115200,
    parity=serial.PARITY_ODD,
    stopbits=serial.STOPBITS_TWO,
    bytesize=serial.SEVENBITS
)

ser.isOpen()

print('Waiting for data from serial port')


client = mqtt.Client()
client.connect("192.168.0.24", 1883, 120)
while True:
    if ser.inWaiting() > 0:
        recv = ser.readline()
        txt = str(recv, 'utf-8')
        print("Received data: " + str(recv, 'utf-8'))
        client.publish("hola/py2", txt)
    time.sleep(1)


