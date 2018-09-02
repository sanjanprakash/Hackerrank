n = int (raw_input ())
arr = map (int, raw_input ().split ())
flag = 0
for i in range (1, n + 1) :
    if i != arr [arr [i - 1] - 1] :
        flag = 1
        break
if flag == 0 :
    print "YES"
else :
    print "NO"
