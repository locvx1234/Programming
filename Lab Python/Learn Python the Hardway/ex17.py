from sys import argv
from os.path import exists
argv = ['ex17.py','from_ex17.txt','to_ex17.txt']
script, from_file, to_file = argv
#in ra ten 2 file
print "Copying from %s to %s " % (from_file,to_file)
#mo file
in_file = open(from_file)
#doc noi dung trong in_file va tra ve chuoi luu trong indata
indata = in_file.read()
print "The input file is %d bytes long" % len (indata)
#Kiem tra xem file copy file exist?
print "Does the output file exists> %r"% exists(to_file)
#Co chac copy khong, neu co an nut bat ky, khong thi an Ctrl C
print "Ready. hit RETURN to continue, CTRL C to abort"
raw_input()
#mo file neu file nay ton tai se xoa het noi dung file nay, neu khong se tao fil moi
out_file = open(to_file,'wb')
#ghi noi dung lay tu from_file vao to_file
out_file.write(indata)
print "Alright, all done"
#dong 2 file
out_file.close()
in_file.close()
