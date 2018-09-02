i,j,k = map(int,raw_input().split())
count = 0
for x in range(i,j+1) :
    if (abs(int(str(x)[::-1]) - x) % k == 0) :
        count += 1
print count
