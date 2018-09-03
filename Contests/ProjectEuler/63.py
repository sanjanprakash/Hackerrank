n = int (raw_input ())
f = 1
i = 1
while f == 1 :
    if len (list (str (i ** n))) == n :
        print i ** n
    elif len (list (str (i ** n))) > n :
        f = 0
    i += 1
