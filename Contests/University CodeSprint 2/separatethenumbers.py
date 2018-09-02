for _ in range(input()):
    a = raw_input()
    for i in range(1, len(a)):
        ans = int(a[:i])
        b = str(ans)
        while len(b) < len(a):
            b += str(ans+1)
            ans += 1
        if a == b:
            print "YES",a[:i]
            break
    else:
        print "NO"
