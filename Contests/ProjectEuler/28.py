t = int (raw_input ())
while t > 0 :
    n = int (raw_input ()) / 2
    #print 16 * (n ** 3)
    #print 30 * (n ** 2)
    #print 26 * n
    ans = ((16 * (n ** 3)) + (30 * (n ** 2)) + (26 * n) + 3) / 3
    ans %= 1000000007
    print ans
    t -= 1
