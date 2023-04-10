import time
import serial

ser = serial.Serial(
    port='/dev/rfcomm0',
    baudrate=9600,
    parity=serial.PARITY_NONE,
    stopbits=serial.STOPBITS_ONE,
    bytesize=serial.EIGHTNBITS
)

ser.isOpen()

print('Waiting for data from serial port')

while True:
    if ser.inWaiting() > 0:
        recv = ser.readline()
        print("Received data: " + str(recv, 'utf-8'))
    time.sleep(1)
