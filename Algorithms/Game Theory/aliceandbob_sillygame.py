#!/bin/python

import sys
import bisect as bi

check = [True] * 100001
check[0],check[1] = False,False
i = 2
while (i < 100001) :
    if (check[i] == True) :
        j = 2*i
        while (j < 100001) :
            check[j] = False
            j += i
    i += 1
    
primes = [i for i, x in enumerate(check) if x]    

g = int(raw_input().strip())
for a0 in xrange(g):
    n = int(raw_input().strip())
    num = bi.bisect_left(primes,n)
    if (n in primes) :
    	num += 1
    if (num % 2 == 0) :
    	print "Bob"
    else :
    	print "Alice"
