#!/usr/bin/python
#Finename: while.py
number = 25
running = True
while running:
	guess = int(raw_input('Enter an integer: '))
	if guess == number:
		print 'Congratulations, you guessed it.'
		running = False		#this causes the while loop to stop
	elif guess < number :
			print 'No, it is a little higher than that.'
	else:
			print 'No, it is a little lower than that.'
else:
	print 'The while lopp is over.'
	#Do anything else you want to do here
print 'Done'
