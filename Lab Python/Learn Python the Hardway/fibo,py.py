# fibonacci

n = int(raw_input("Nhap so chu so dau tien trong day fibo "))
a, b = 1, 1
for i in range(n):
    print a
    a, b = b, a+b
