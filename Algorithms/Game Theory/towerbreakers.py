t = int(raw_input())
while (t > 0) :
    n,m = map(int,raw_input().split())
    if (m == 1 or n % 2 == 0) :
        print "2"
    else :
        print "1"
    t -= 1
