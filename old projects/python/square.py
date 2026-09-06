import turtle
turtle.speed(0)

t = turtle.Turtle()
turtle.bgcolor("black")
turtle.speed(0)

for i in range(4):
        for colors in ["light green", "sky blue", "red", "yellow", "pink", "white", "orange"]:
            turtle.color(colors)
            turtle.pensize(3)
            turtle.left(12)
            turtle.forward(200)
            turtle.left(90)
            turtle.forward(200)
            turtle.left(90)
            turtle.forward(200)
            turtle.left(90)
            turtle.forward(200)
            turtle.left(90)
