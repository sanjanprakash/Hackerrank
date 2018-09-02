#!/bin/python

import sys


n = int(raw_input().strip())
calories = map(int, raw_input().strip().split(' '))
arr = sorted(calories)[::-1]
su,i,j = 0,0,1
while(i < n) :
    su += (2 ** i) * arr[i]
    i += 1
print su
