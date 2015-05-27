def rwh_primes(n):
    # http://stackoverflow.com/questions/2068372/fastest-way-to-list-all-primes-below-n-in-python/3035188#3035188
    """ Returns  a list of primes < n """
    sieve = [True] * n
    for i in xrange(3,int(n**0.5)+1,2):
        if sieve[i]:
            sieve[i*i::2*i]=[False]*((n-i*i-1)/(2*i)+1)
    return [2] + [i for i in xrange(3,n,2) if sieve[i]]
def mario_check(n):
    check = rwh_primes(n)
a = [2]
for x in xrange(3,n):
    for ai in a:
        if x % ai == 0: break
        else:
            if x not in check:
                print "Failed x="+str(x)
                break
        a.append(x)
return a
 
if __name__ == "__main__":
    n = 1000000
    mario_check(n)
