import math
from operator import itemgetter
t = int (raw_input ())
l0 = []
while t > 0 :
    a, b = map (int, raw_input ().split ())  
    l0.append ((a, b, b * math.log10 (a)))
    t -= 1
l0 = sorted (l0 , key = itemgetter (2))
n = int (raw_input ())
print l0 [n - 1][0], l0 [n - 1][1]
