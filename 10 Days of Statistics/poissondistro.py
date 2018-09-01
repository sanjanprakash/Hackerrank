import math

def Fact(n) :
    if (n == 0) :
        return 1
    return n * Fact(n - 1)

def Poiss(l,k) :
    return (((l ** k) * math.exp(-l))/Fact(k))

l = float(raw_input())
k = int(raw_input())
print round(Poiss(l,k),3)
