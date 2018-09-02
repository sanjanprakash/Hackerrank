#!/bin/python

import sys
import math


t = int(raw_input().strip())
k = math.log(t/3 + 1,2)
if k % 1.0 == 0.0 and t % 3 == 0:
    k = int(k) - 1
else :
    k = int(k)

start_time = 1
if k >= 1 :
    start_time += 3*((2**k) - 1)
ans = 3*(2**k) - (t - start_time)
print ans

