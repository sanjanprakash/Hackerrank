import math

n = int (raw_input ())
ans = 0
for i in range (10, n + 1) :
    l = list (str (i))
    #print l
    su = 0
    for j in l :
        j = int (j)
        su += math.factorial (j)
    if su % i == 0 :
        ans += i
print ans
        
    
