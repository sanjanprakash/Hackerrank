#!/bin/python

import sys
import math

def func(li) :
    flag = True
    for i in range(0,len(li)) :
        if (abs(li[i] - i) > 1) :
            flag = False
            break
    if (flag == False) :
        print "No"
    else :
        print "Yes"

q = int(raw_input().strip())
for a0 in xrange(q):
    n = int(raw_input().strip())
    a = list(map(int, raw_input().strip().split(' ')))
    func(a)
    # Write Your Code Here

