n = int (raw_input ())
arr = list (map (int, raw_input ().split ()))
y = set (arr)
if len (y) < n :
    print "NO"
else :
    print "YES"
