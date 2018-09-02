from collections import OrderedDict
alpha = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
n = int (raw_input ())
while n > 0 :
    key = (list (raw_input ()))
    key = list (OrderedDict.fromkeys (key))
    x = []
    for i in range (0, len (key)) :
        y = []
        y.append (key [i])
        x.append (y)
    j = 0
    for i in alpha :
        if i not in key :
            x [j].append (i)
            j = (j + 1) % len (key)
    for i in range (0, len (key)) :
        x [i] = "".join (x [i])
    x.sort ()
    y = []
    for i in range (0, len (key)) :
        x [i] = list (x [i])
        for j in x [i] :
            y.append (j)
    ind = raw_input ().split ()
    for i in range (0, len (ind)) :
        ind [i] = list (ind [i])
        for j in range (0, len (ind [i])) :
            ind [i][j] = alpha [y.index (ind [i][j])]
        ind [i] = "".join (ind [i])
    for i in ind :
        print i,
    print ""
    n = n - 1
