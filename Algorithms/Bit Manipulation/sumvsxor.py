#!/bin/python

import sys

def Num_z(n) :
    count = 0
    while (n > 0) :
        if (n % 2 == 0) :
            count += 1
        n /= 2
    return (2 ** count)

n = int(raw_input().strip())
print Num_z(n)
