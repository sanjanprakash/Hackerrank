import math

def get_factors(n):
    a, count = 1, 0
    limit = int(math.ceil(math.sqrt(n)))
    if n % 2 == 0:
        while n % 2 == 0:
            count+=1
            n /= 2
        a*=(count+1)
    for i in xrange(3, limit, 2):
        if n % i == 0:
            count=0
            while n % i == 0:
                count+=1
                n /= i
            a*=(count+1)
            if n == 1:
                return a
    return 2*a

ans = [0]
i = 2
while len(ans) < 999:
    j = (i * (i + 1))/2
    k = get_factors(j)
    while len(ans) < k:
        ans.append(j)
    i += 1

for i in xrange(input()):
    n = input()
    print ans[n]
