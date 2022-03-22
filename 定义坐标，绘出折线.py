import turtle
import math
#定义多个点的坐标
t=turtle.Pen()
x1,y1=100,100
x2,y2=100,-100
x3,y3=-100,-100
x4,y4=-100,100
'''
#绘制折线
turtle.penup()
turtle.goto(x1,y1)
turtle.pendown()
turtle.goto(x2,y2)
turtle.goto(x3,y3)
turtle.goto(x4,y4)

#计算起始点和终点的距离
distance=math.sqrt((x1-x4)**2+(y1-y4)**2)#计算圆心的距离公式：(（x1-x2)的平方+(y1-y2)的平方),然后再开根号
turtle.write(distance)      #用turtle.write()写出数据
'''
'''

x1,y1=100,50
x2,y2=-50,100
x3,y3=120,-50
x4,y4=50,-50
turtle.penup()
turtle.goto(x1,y1)
turtle.pendown()
turtle.goto(x2,y2)
turtle.goto(x3,y3)
turtle.goto(x4,y4)
distance=math.sqrt((x1-x2)**2+(y1-y2)**2)
turtle.write(distance)
'''
