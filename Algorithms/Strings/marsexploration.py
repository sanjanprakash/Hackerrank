#!/bin/python

import sys

ans = 0
S = raw_input().strip()
for i in range(0,len(S)) :
    if i % 3 == 0 and S[i] != 'S' :
        ans += 1
    elif i % 3 == 1 and S[i] != 'O' :
        ans += 1
    elif i % 3 == 2 and S[i] != 'S' :
        ans += 1
print ans
