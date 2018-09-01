#!/bin/python

import sys


n = int(raw_input().strip())
for a0 in xrange(n):
    print len(set(raw_input()))
