#!/bin/python

import sys


n = int(raw_input().strip())
a = map(int, raw_input().strip().split(' '))
a = sorted(a)
diff = 999999999
for i in range(0,len(a) - 1) :
    if (abs(a[i] - a[i + 1]) < diff) :
        diff = abs(a[i] - a[i + 1]) 
print diff
