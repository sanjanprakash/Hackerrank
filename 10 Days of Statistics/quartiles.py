n = int(raw_input())
li = map(int,raw_input().split())
li.sort()
s = n/2
if (n % 2 == 1) :
    q2 = li[s]
    if (s % 2 == 1) :
        q1 = li[s/2]
        q3 = li[s + s/2 + 1]
    else :
        q1 = (li[s/2 - 1] + li[s/2])/2
        q3 = (li[s + s/2] + li[s + s/2 + 1])/2
else :
    q2 = (li[s - 1] + li[s])/2
    if (s % 2 == 1) :
        q1 = li[s/2]
        q3 = li[s + s/2]
    else :
        q1 = (li[s/2 - 1] + li[s/2])/2
        q3 = (li[s + s/2 - 1] + li[s + s/2])/2
print q1
print q2
print q3
