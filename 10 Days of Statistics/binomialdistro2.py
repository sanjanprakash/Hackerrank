def Fact(n) :
    if (n == 0) :
        return 1
    return n * Fact(n - 1)

def nCr(n,r,p) :
    return (Fact(n)/(Fact(r) * Fact(n - r))) * (p ** r) * ((1 - p) ** (n - r))

p,n = map(float,raw_input().split())
p /= 100

ans1,ans2 = 0,0
for i in range(0,3) :
    ans1 += nCr(n,i,p)
ans2 = 1 - ans1 + nCr(n,2,p)
print round(ans1,3)
print round(ans2,3)
