a = raw_input ()
b = set (a)
if len (a) % len (b) == 0 or len (a) % len (b) == 1 :
    print "YES"
elif (len (a) - 1) % (len (b) - 1) == 0:
    print "YES"
else :
    print "NO"
