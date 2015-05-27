#!/usr/bin/python
#Filename: coninue.py
while True:
	s = raw_input('Enter something : ')
	if s == 'quit':
		break
	if len(s) < 3:
		continue
	print 'Input is of sufficient lenght'
# Do other kinds of processing here...