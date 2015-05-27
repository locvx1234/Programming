import math
ngay = int(raw_input("Ngay "))
thang = int(raw_input("Thang "))
nam = int(raw_input("Nam "))
if (thang < 3):
          thang += 12
          nam -= 1
thu = abs((ngay + 2*thang + 3*(thang +1)/5 + nam + nam/4)%7)
if (thu == 0):
    print "Chu nhat"
elif (thu == 1):
    print "Thu hai"
elif (thu == 2):
    print "Thu ba"
elif (thu == 3):
    print "Thu tu"
elif (thu == 4):
    print "Thu nam"
elif (thu == 5):
    print "Thu sau"
elif (thu == 6):
    print "Thu bay"
else :
    print "Loi khong xac dinh"
    
