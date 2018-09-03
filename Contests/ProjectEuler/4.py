pals = []
for i in range (100, 1000) :
    for j in range (100, 1000) :
        if str (i * j) [::-1] == str (i * j) :
            pals.append (i * j)
pals = list (set (pals))
pals.sort ()
t = int (raw_input ())
while t > 0 :
    n = int (raw_input ())
    for i in range (0, len (pals)) :
        if pals [i] > n :
            print pals [i - 1]
            break
    t -= 1
