import tkinter as tk
import serial
import time

# Configuración del puerto serie
arduino_port = 'COM6'  
baud_rate = 9600
ser = serial.Serial(arduino_port, baud_rate)
time.sleep(2) 

def move_left():
    ser.write(b'L') 
    print("Servo movido a la izquierda")

def move_right():
    ser.write(b'R')  
    print("Servo movido a la derecha")

# Crear la ventana principal
root = tk.Tk()
root.title("Control de Servo con Arduino")
root.geometry("300x200")

# Crear los botones
left_button = tk.Button(root, text="Mover Izquierda", command=move_left)
left_button.pack(pady=10)

right_button = tk.Button(root, text="Mover Derecha", command=move_right)
right_button.pack(pady=10)

# Inicia el bucle principal de tkinter
root.mainloop()

ser.close()
