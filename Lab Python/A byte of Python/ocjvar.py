#!/usr/bin/python
#Filename: ocjvar.py

class Person:
	'''Represents a person.'''
	population = 0

	def __init__(self, name):
		'''Initializes the person's data.'''
		self.name = name
		print '(Initializes %s)' % self.name

		#When this person is created, he/she
		#adds to the population
		Person.population += 1

	def __del__(self):
		'''I am dying.'''
		print '%s says bye.' % self.name

		Person.population -= 1

		if Person.population == 0:
			print 'I am the last one.'
		else:
			print 'There are still %d people left.' % Person.population
	def sayHi(self):
		'''Greating by the person.

		Really, that's all it does.'''
		print 'Hi, my name is %s.' % self.name

	def howMany(self):
		'''Prints the current population.'''
		if Person.population == 1:
			print 'I am the only person here.'
		else:
			print 'We have %d persons here.' % Person.population
locvx = Person('LocVu')
locvx.sayHi()
locvx.howMany()

cr7 = Person('Cristiano Ronaldo')
cr7.sayHi()
cr7.howMany()

locvx.sayHi()
locvx.howMany()