#!/bin/python

import sys

def solve(opr):
    a = int(opr[0])
    b = int(opr[2])
    if (opr[1] == '-') :
        return a - b
    else :
        return a + b

if __name__ == "__main__":
    opr = raw_input().strip()
    result = solve(opr)
    print result
