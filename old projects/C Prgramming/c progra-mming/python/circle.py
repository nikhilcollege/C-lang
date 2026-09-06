import turtle 
turtle.bgcolor('grey')
turtle.speed(0)
col=('black','red','orange','yellow','green','blue')
for i in range(360):
    turtle.pencolor(col[i%6])
    turtle.width(i/5+5)
    turtle.forward(i)
    turtle.left(20)
