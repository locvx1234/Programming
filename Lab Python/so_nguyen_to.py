from datetime import datetime
import math
import sys
 
start = datetime.now()
a =[2]
n = int(sys.argv[1])
for x in xrange(3, n):
    can_x = math.sqrt(x)
   
    for ai in a:
        if x % ai ==0: break
        if ai > can_x:
            a.append(x)
            break
    else:
        a.append(x)
       
print 'Voi n = %d, tim duoc %d so nguyen to' % (n, len(a))
print 'Thoi gian: ', (datetime.now() - start)
