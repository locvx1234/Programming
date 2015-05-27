# UCLN.py
# Written by LocVu


def ucln(a,b):
    if a == 0 or b == 0:
        return a + b
    else:
        return ucln(b, a%b)

if  __name__=="__main__":
    a = int(raw_input("nhap so thu nhat: "))
    b = int(raw_input("nhap so thu hai: "))
    print ("UCLN la: ", ucln(a,b))
