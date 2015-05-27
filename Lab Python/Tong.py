n = input("nhap n: ")
s = 0
gt = 1
for i in range(1,n):
    gt = gt*(i+1)
    print gt
    s = s + 1.0/gt
print "Gia tri cua s la ", s
