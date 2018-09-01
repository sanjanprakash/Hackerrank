def Power(base,exp) :
    ans = 1
    for i in range(exp) :
        ans *= base
    return ans

def Check(x,n,base) :
    num = Power(base,n)
    rem_x = x - num
    if (rem_x < 0) :
        return 0
    if (rem_x == 0) :
        return 1
    return Check(x,n,base + 1) + Check(rem_x,n,base + 1)

x = int(raw_input())
n = int(raw_input())
print Check(x,n,1)
