t = int (raw_input ())
l = []
while t > 0 :
    l.append (raw_input ())
    t -= 1
l.sort ()
t = int (raw_input ())
while t > 0 :
    test = raw_input ()
    index = l.index (test) + 1
    su = 0
    test = list (test)
    for i in test :
        su += ord (i) - 64
    print su * index
    t -= 1
