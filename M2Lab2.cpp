"""
csc134
M2LAB2- pythn turtle
Alphons SHaji
9/10/25
"""
"""
No idea how it results in that shape. I just modified a spiral pentagon code
"""
import turtle as t
import random
import math


t.bgcolor("cyan")
t.title("my cool pattern")


t.pensize(10)
t.speed(100)
t.fillcolor("gray")
x=10

for i in range(120):
    t.pencolor("black")
    t.fd(x)
    t.right(150)
    x=x+5
    y=t.heading()
    t.pencolor("white")
    t.left(90)
    t.fd(x)
    t.right(165)
        
       

        

