

class Parent(object):
    def altered(self):
        print "PARENT altered()"

class Child(object):
    def altered(self):
        print "CHILD, BEFORE PARENT altered()"
        super(Child,self).altered()
        print "CHILD, AFTER PARENT alreted()"

dad = Parent()
son = Child()

dad.altered()
son.altered()

