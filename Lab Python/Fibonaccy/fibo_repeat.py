#!/usr/bin/python
# Create by locvx1234

def fibo(n):
        if n == 1 or n == 2:
                return 1
        else:
                pre = 1
                cur = 1
                for i in range(3, n):
                        cur = cur + pre
                        pre = cur - pre
                return cur

print fibo(50)
