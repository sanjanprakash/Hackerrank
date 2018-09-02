def fib(a,b,n) :
    if n == 1 :
        return a
    elif n == 2 :
        return b
    else :
        return fib(a,b,n-1)**2 + fib(a,b,n-2)

n = raw_input().split()
a = int(n[0])
b = int(n[1])
n = int(n[2])
print fib(a,b,n)
