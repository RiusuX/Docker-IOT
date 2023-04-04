import time
import serial

ser = serial.Serial(
    port='/dev/rfcomm0',
    baudrate=115200,
    parity=serial.PARITY_ODD,
    stopbits=serial.STOPBITS_TWO,
    bytesize=serial.SEVENBITS
)

ser.isOpen()

print('Waiting for data from serial port')

while True:
    if ser.inWaiting() > 0:
        recv = ser.readline()
        print("Received data: " + str(recv, 'utf-8'))
    time.sleep(1)
