# Store the values outputted by the weighing machine in a text file

import serial
from datetime import datetime

# Connect Arduino to COM 1
ser = serial.Serial('COM4', 9600, timeout=1)

filepath = "INSERT FILE PATH"
txtfile = open(filepath, "w")

while True
  # Read data and store it in line variable
  line = ser.readline()
  # Decode the line from byte to string
  data = line.decode()
  data = data.partition("\")[0]
  # Store the time of data collection
  txtfile.write(datetime.now().strftime("%H:%M:%S") + "\n")
  # Write your data to the text file
  txtfile.write(data + "\n")
