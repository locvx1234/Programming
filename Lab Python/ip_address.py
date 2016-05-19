#!/usr/bin/python
'''
	Get subnet from ip address
	Written by : locvx1234
'''
ip = raw_input("IP address: ")
pre = int(raw_input("Prefix (Ex: 24): "))

arr=""
ip_a = ip.split('.')	# Tach ip ra thanh mang cac so
for i in ip_a:
	arr = arr + '{0:08b}'.format(int(i))	# Convert sang danh nhi phan

subnet=arr[:pre]+ '0'*(32-pre)	# Subnet dang nhi phan 
#print "Subnet :", subnet

octet = [subnet[0:8], subnet[8:16], subnet[16:24], subnet[24:32]]

a=[]
for i in octet:
	a.append(str(int(i,2)))		
#print a
print 'Subnet: ', '.'.join(a)	