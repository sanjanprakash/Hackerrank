#!/bin/python

import sys


s = raw_input().strip()
print sum(1 for c in s if c.isupper()) + 1
