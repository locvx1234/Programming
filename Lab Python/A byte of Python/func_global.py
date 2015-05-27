#!/usr/bin/python
#Filename: func_global.py

def func():
	global x
	print ' x is', x
	x = 2
	print 'Change global x to', x
x = 50
func()
print 'Value of x is', x