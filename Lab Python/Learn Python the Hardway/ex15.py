from sys import argv

a = ["ex15.py","ex15.txt"]
argv = a
script, filename = argv
txt = open(filename)
print "Day la ten file : %r"% filename
print "\n"
print txt.read()
tat = open(raw_input("nHAP ten file lan nua "))
print tat.read()
