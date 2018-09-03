from collections import Counter

for _ in range(input()):
    n, a = input(), raw_input()
    if a.count("_"):
        b = Counter(a)
        del b["_"]
        for x in b:
            if b[x] == 1:
                print "NO"
                break
        else: 
            print "YES"
    else:
        a = "_" + a + "_"
        for i in range(1, len(a)-1):
            if a[i] != a[i - 1] and a[i] != a[i + 1]:
                print "NO"
                break
        else: 
            print "YES"
