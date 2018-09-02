#!/bin/python

import sys

def revisedRussianRoulette(n,doors):
    ma,mi = 0,0
    prev = -1
    for i in range(n) :
        curr = doors[i]
        if (curr == 1) :
            ma += 1
            if (prev == -1 or prev == 0) :
                mi += 1
            else :
                curr = 0
        prev = curr
    ans = [mi,ma]
    return ans

if __name__ == "__main__":
    n = int(raw_input().strip())
    doors = map(int, raw_input().strip().split(' '))
    result = revisedRussianRoulette(n,doors)
    print " ".join(map(str, result))


