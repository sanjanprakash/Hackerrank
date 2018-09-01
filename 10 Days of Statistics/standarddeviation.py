import math
n = int(raw_input())
li = map(int,raw_input().split())
mu = sum(li)/n
std = 0
for i in li :
    std += (i - mu) ** 2
std /= n
print round(math.sqrt(std),1)
