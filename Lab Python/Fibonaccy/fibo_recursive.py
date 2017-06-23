#!/usr/bin/python
# Create by locvx1234

def fibo(n):
        if n == 1 or n == 2:
                return 1
        else:
                return fibo(n-1) + fibo(n-2)

print fibo(50)
