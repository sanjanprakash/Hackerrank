num,denom = map(float,raw_input().split())
p = num/denom
n = int(raw_input())
print round((((1 - p) ** (n - 1)) * p),3)
