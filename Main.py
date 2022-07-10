import serial
from pynput.keyboard import Key,Controller
import time

keyboard = Controller()


ser = serial.Serial('/dev/ttyUSB0', 9600)  # Start serial communication
while True:
    data = int(ser.readline())
    if data >= 10:
        keyboard.press(Key.media_volume_up)
        #keyboard.release(Key.media_volume_up)
    elif data <=10:
        keyboard.press(Key.media_volume_down)
        #keyboard.release(Key.media_volume_down)
