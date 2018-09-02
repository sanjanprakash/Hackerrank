#!/bin/python

import sys


s = raw_input().strip()
n = long(raw_input().strip())
j = n/len(s)
k = s.count('a')
m = s[:n % len(s)]
ans = k * j
ans += m.count('a')
print ans
