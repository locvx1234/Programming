
#password min 10 character, include both number, ABC, abc

def check_pass(str_pass):
    if str_pass.lower() != str_pass and str_pass.upper() != str_pass and len(str_pass) > 10 and filter(lambda s: s in '0123456789', str_pass):
        return True
    else:
        return False
 
if __name__ == "__main__":
    s=str(raw_input("Nhap chuoi:"))
    print check_pass(s)
    