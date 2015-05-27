from sys import argv
argv = ['ex20.py','input_ex20.txt']
script, input_file = argv
#doc file
def print_all(f):
    print f.read()
#di chuyen den byte dau tien cua file
def rewind(f):
    f.seek(0)
    # minh chua hieu de lam gi
#in ra dong thu va in ra dong
def print_a_line(line_count, f):
    print line_count, f.readline()
current_file = open(input_file)
print_all(current_file)
rewind(current_file)
print "Let 's print three lines:"
current_line = 1
print_a_line (current_line, current_file)
current_line += 1
print_a_line (current_line, current_file)
current_line += 1
print_a_line (current_line, current_file)
