num,denom = map(float,raw_input().split())
p = num/denom
n = int(raw_input())
print round((p * (1 - ((1 - p) ** n)))/p,3)
