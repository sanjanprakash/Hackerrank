#!/bin/python

import sys


n = int(raw_input().strip())
types = map(int, raw_input().strip().split(' '))
count = [0,0,0,0,0]
for i in types :
    count[i - 1] += 1
m = max(count)
xt = []
for i in [i for i,x in enumerate(count) if x == m]:
    xt.append(i + 1)
print xt[0]
