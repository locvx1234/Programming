#phong van in ra file
f = open ("hoso.txt","w")
name = raw_input("Name : ")
f.write(name)
f.write("\n")
old = raw_input("Old : ")
f.write(old)
f.write("\n")
job = raw_input("Job : ")
f.write(job)
f.write("\n")
cpn = raw_input("Company : ")
f.write(cpn)
f.write("\n")
tel = raw_input("Telephone : ")
f.write(tel)
f.write("\n")
f.close()

f = open("hoso.txt","r")
print f.read()
f.close()
