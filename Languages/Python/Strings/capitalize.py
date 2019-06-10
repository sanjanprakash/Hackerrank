#!/bin/python

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    prev = ' '
    ans = ""
    for x in s :
        if (prev == ' ') :
            x = x.upper()
        prev = x
        ans += x
    return ans

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = raw_input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
