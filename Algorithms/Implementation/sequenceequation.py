n = int(raw_input())
arr = map(int, raw_input().split())
for i in range(0,n) :
    print 1 + arr.index(1 + arr.index(1 + i))
