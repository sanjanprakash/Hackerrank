def Fact(n) :
    if (n == 0) :
        return 1
    return n * Fact(n - 1)

def nCr(n,r,p) :
    return (Fact(n)/(Fact(r) * Fact(n - r))) * (p ** r) * ((1 - p) ** (n - r))

b,g = map(float,raw_input().split())
p = b/(b + g)
ans = 0

for i in range(3,7) :
    ans += nCr(6,i,p)
print round(ans, 3)
