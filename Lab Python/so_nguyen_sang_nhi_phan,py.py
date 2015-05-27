#doi so n ra nhi phan

n = int(raw_input(" Enter a value : "))
a = []
while n >= 0:
    if n==0 :
        a.append(0)
        break
    else:
        a.append(n%2)
        n = n/2
string = ""
for i in a[::-1]:
        string += str(i)
print string
