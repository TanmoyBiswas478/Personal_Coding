# >>>>>> calculator
def add(x, y):
    return x + y

def substract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if(y==0):
        print("Error! Cannot divide by zero.")
    else:
     return  x / y
# calculator <<<<<<
# area & parameter of Circle >>>>>>
def circle_area(r):
    return 3.14 * r ** 2

def circle_parameter(r):
    return 2 * 3.14 * r
# area & parameter of Circle <<<<<<
# cal to fah & fah to cel >>>>>>
def celsius_to_fahrenheit(celsius):
    return (celsius * 9/5) + 32
def fahrenheit_to_celsius(fahrenheit):
    return (fahrenheit - 32) * 5/9
def choose():
    print("1. Celsius To Fahrenheit.")
    print("2. Fahrenheit To Celsius.")
    choice = int(input("Enter your Choice : (1 or 2)\n"))
    if (choice == 1):
        celsius = int(input("Enter Celsius : "))
        print(celsius_to_fahrenheit(celsius))
    elif  (choice == 2):
        fahrenheit = int(input("Enter farhenheit : "))
        print(fahrenheit_to_celsius(fahrenheit))
    else:
        print("Invalid Input")
if __name__ ==  '__main__':
    choose()
# cal to fah & fah to cel <<<<<<
import datetime
def age(age):
    current_time = datetime.datetime.now().year
    return  current_time - age
