# giai phuong trinh bac 1 - ghi ra file

print "Nhap cac he so cua phuong trinh ax + b = c"
f = open("phuong trinh bac 1.txt" , "w")
a = float(raw_input(' a = '))
b = float(raw_input(' b = '))
c = float(raw_input(' c = '))
fx = ("%dx + %d = %d\n" % (a,b,c))
f.write(fx)
if (a==0):
    f.write ('Phuong trinh vo nghiem\n')
else:
    x = (c-b)/float(a)
    nghiem = ("x = %f\n"%x)
    f.write (nghiem)
f.close()

f = open("phuong trinh bac 1.txt" , "r")
print f.read()
f.close()

