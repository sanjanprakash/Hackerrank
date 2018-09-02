import math
a,d,m,s = map(int,raw_input().split())
n = 1 + (a - m)/d
exp_s = (n * ((2 * a) - (n - 1) * d))/2
if (exp_s <= s) :
    ans = n + (s - exp_s)/m
else :
    root_a = ((-d - (2 * a)) + math.sqrt(((-d - (2 * a)) ** 2) + (8 * s * (-d))))/(2 * (-d))
    root_b = ((-d - (2 * a)) - math.sqrt(((-d - (2 * a)) ** 2) + (8 * s * (-d))))/(2 * (-d))
    if (root_a < root_b and root_a > 0 and root_a < n) :
        ans = int(root_a)
    else :
        ans = int(root_b)
print ans
