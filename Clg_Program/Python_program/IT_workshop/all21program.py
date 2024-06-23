**Age Validation**
   name = input("Enter your name: ")
   age = int(input("Enter your age: "))
   print(f"Welcome, {name}!" if age >= 18 else f"Sorry, {name}. Please come back when you are older.")

**Rectangle Area and Perimeter**
   l = float(input("Enter length: "))
   w = float(input("Enter width: "))
   a, p = l * w, 2 * (l + w)
   print(f"Area: {a}, Perimeter: {p}")

**Temperature Conversion**
   t = float(input("Enter temperature: "))
   u = input("Enter unit (C/F): ").upper()
   r = t * 9/5 + 32 if u == 'C' else (t - 32) * 5/9 if u == 'F' else "Invalid"
   print(f"Temperature: {r}")

**Basic Calculator**
   c = {'+': lambda x, y: x + y, '-': lambda x, y: x - y, '*': lambda x, y: x * y, '/': lambda x, y: x / y}
   a = float(input("First number: "))
   b = float(input("Second number: "))
   o = input("Operation (+,-,*,/): ")
   print(f"Result: {c[o](a, b)}")

**Circle Area and Circumference**
   import math
   r = float(input("Radius: "))
   a, c = math.pi * r**2, 2 * math.pi * r
   print(f"Area: {a}, Circumference: {c}")

**Calculate Age**
   from datetime import datetime as d
   y = int(input("Birth year: "))
   a = d.now().year - y
   print(f"Age: {a}")

**Module-based Calculator**
        **math_ops.py:**
                         add = lambda x, y: x + y
                         subtract = lambda x, y: x - y
                        multiply = lambda x, y: x * y
                        divide = lambda x, y: x / y if y != 0 else "Error"
        **main.py:**
                        import math_ops as m
                        a, b = float(input("First number: ")), float(input("Second number: "))
                        o = input("Operation (+,-,*,/): ")
                        print(f"Result: {m.__dict__[o](a, b)}")

**Elapsed Time**
   import time as t
   s, e = 0, 0
   def st(): global s; s = t.time()
   def et(): global e; e = t.time()
   def et(): global e; e = t.time()
   def et(): global e; e = t.time()
   st(); input("Enter..."); et()
   print(f"Elapsed time: {e-s} seconds")

**Number Guessing Game**
   import random as r
   n, g = r.randint(1, 100), -1
   while g != n: g = int(input("Guess: "))
   print("Correct!" if g == n else "Nope")

**Leap Year Check**
    y = int(input("Year: "))
    print(f"Leap year: {'Yes' if y%4==0 and (y%100!=0 or y%400==0) else 'No'}")

**Bank Balance Check**
    b = float(input("Balance: "))
    w = float(input("Withdraw: "))
    print(f"Remaining: {b-w if b>w else 'Not enough'}")

 **Grading System**
    s = int(input("Score: "))
    print(f"Grade: {'A' if s >= 90 else 'B' if s >= 80 else 'C' if s >= 70 else 'D' if s >= 60 else 'F'}")

**Fibonacci Series**
    n, a, b = int(input("Number of terms: ")), 0, 1
    while n: print(a, end=" "); a, b, n = b, a+b, n-1

**Prime Number Check**
    n = int(input("Number: "))
    print(f"Prime: {'Yes' if all(n%i for i in range(2, int(n**0.5)+1)) and n>1 else 'No'}")

**Dice Roll Sum**
    import random as r
    t = 0
    while input("Continue? ") == "Y": t += r.randint(1, 6)
    print(f"Total: {t}")

**Factorial Calculation**
    f = lambda n: 1 if n <= 1 else n * f(n-1)
    print(f"Factorial: {f(int(input('Number: ')))}")

**Area Calculation**
   import math
   def area_circle(radius):
       return math.pi * radius ** 2
   def area_rectangle(length, width):
       return length * width
   def area_triangle(base, height):
       return 0.5 * base * height
   shape = input("Enter shape (circle/rectangle/triangle): ").lower()
   if shape == "circle":
       radius = float(input("Enter radius of the circle: "))
       print(f"Area of the circle: {area_circle(radius)}")
   elif shape == "rectangle":
       length = float(input("Enter length of the rectangle: "))
       width = float(input("Enter width of the rectangle: "))
       print(f"Area of the rectangle: {area_rectangle(length, width)}")
   elif shape == "triangle":
       base = float(input("Enter base length of the triangle: "))
       height = float(input("Enter height of the triangle: "))
       print(f"Area of the triangle: {area_triangle(base, height)}")
   else:
       print("Invalid shape entered. Please enter 'circle', 'rectangle' or 'triangle'.")

** String Manipulation**
   S = "Hello, World!"
   print("Original string:", S)
   print("Slice [7:]:", S[7:])
   print("Slice [2:9]:", S[2:9])
   S1 = "Hello"
   S2 = "World"
   S3 = S1 + ", " + S2 + "!"
   print("Concatenated string:", S3)
   name = "Harry"
   age = 35
   formatted_string = f"Name: {name}, Age: {age}"
   print("Formatted string:", formatted_string)

**Basic arithmetic operations using lambda functions**
   num1, num2 = 10, 5
   add = lambda x, y: x + y
   sub = lambda x, y: x - y
   multi = lambda x, y: x * y
   divide = lambda x, y: x / y if y != 0 else 'undefined'
   print(f"Addition: {num1} + {num2} = {add(num1, num2)}")
   print(f"Subtraction: {num1} - {num2} = {sub(num1, num2)}")
   print(f"Multiplication: {num1} * {num2} = {multi(num1, num2)}")
   print(f"Division: {num1} / {num2} = {divide(num1, num2)}")

**Temperature conversion program:**
   def celsius_to_fahrenheit(celsius):
       return (celsius * 9/5) + 32
   def fahrenheit_to_celsius(fahrenheit):
       return (fahrenheit - 32) * 5/9
   choice = input("Enter 'C' for Celsius to Fahrenheit, 'F' for Fahrenheit to Celsius: ").upper()
   if choice == 'C':
       celsius = float(input("Enter temperature in Celsius: "))
       print(f"Temperature in Fahrenheit: {celsius_to_fahrenheit(celsius)}")
   elif choice == 'F':
       fahrenheit = float(input("Enter temperature in Fahrenheit: "))
       print(f"Temperature in Celsius: {fahrenheit_to_celsius(fahrenheit)}")
   else:
       print("Invalid choice!")

21. **List comprehension for squared numbers:**
squared_numbers = [x ** 2 for x in range(1, 11)]
print(f"Squared numbers from 1 to 10: {squared_numbers}")
