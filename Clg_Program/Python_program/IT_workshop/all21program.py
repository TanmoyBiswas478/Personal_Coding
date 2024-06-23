**Experiment 1:**
   name = input("Enter your name: ")
   age = int(input("Enter your age: "))
   print(f"Welcome, {name}!" if age >= 18 else f"Sorry, {name}. Please come back when you are older.")

**Experiment 2:**
   l = float(input("Enter length: "))
   w = float(input("Enter width: "))
   a, p = l * w, 2 * (l + w)
   print(f"Area: {a}, Perimeter: {p}")

**Experiment 3:**
   t = float(input("Enter temperature: "))
   u = input("Enter unit (C/F): ").upper()
   r = t * 9/5 + 32 if u == 'C' else (t - 32) * 5/9 if u == 'F' else "Invalid"
   print(f"Temperature: {r}")

**Experiment 4:**
   c = {'+': lambda x, y: x + y, '-': lambda x, y: x - y, '*': lambda x, y: x * y, '/': lambda x, y: x / y}
   a = float(input("First number: "))
   b = float(input("Second number: "))
   o = input("Operation (+,-,*,/): ")
   print(f"Result: {c[o](a, b)}")

**Experiment 5:**
   import math
   r = float(input("Radius: "))
   a, c = math.pi * r**2, 2 * math.pi * r
   print(f"Area: {a}, Circumference: {c}")

**Experiment 6:**
   from datetime import datetime as d
   y = int(input("Birth year: "))
   a = d.now().year - y
   print(f"Age: {a}")

**Experiment 7:**
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

**Experiment 8:**
   import time as t
   s, e = 0, 0
   def st(): global s; s = t.time()
   def et(): global e; e = t.time()
   def et(): global e; e = t.time()
   def et(): global e; e = t.time()
   st(); input("Enter..."); et()
   print(f"Elapsed time: {e-s} seconds")

**Experiment 9:**
   import random as r
   n, g = r.randint(1, 100), -1
   while g != n: g = int(input("Guess: "))
   print("Correct!" if g == n else "Nope")

**Experiment 10:**
    y = int(input("Year: "))
    print(f"Leap year: {'Yes' if y%4==0 and (y%100!=0 or y%400==0) else 'No'}")

**Experiment 11:**
    b = float(input("Balance: "))
    w = float(input("Withdraw: "))
    print(f"Remaining: {b-w if b>w else 'Not enough'}")

 **Experiment 12:**
    s = int(input("Score: "))
    print(f"Grade: {'A' if s >= 90 else 'B' if s >= 80 else 'C' if s >= 70 else 'D' if s >= 60 else 'F'}")

**Experiment 13:**
    n, a, b = int(input("Number of terms: ")), 0, 1
    while n: print(a, end=" "); a, b, n = b, a+b, n-1

**Experiment 14:**
    n = int(input("Number: "))
    print(f"Prime: {'Yes' if all(n%i for i in range(2, int(n**0.5)+1)) and n>1 else 'No'}")

**Experiment 15:**
    import random as r
    t = 0
    while input("Continue? ") == "Y": t += r.randint(1, 6)
    print(f"Total: {t}")

**Experiment 16:**
    f = lambda n: 1 if n <= 1 else n * f(n-1)
    print(f"Factorial: {f(int(input('Number: ')))}")

