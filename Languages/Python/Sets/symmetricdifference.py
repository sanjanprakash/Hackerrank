n1 = int (raw_input ())
x = raw_input ()
a = list (map (int, x.split (" ")))
A = set (a)
n2 = int (raw_input ())
y = raw_input ()
b = list (map (int, y.split (" ")))
B = set (b)
dif = A.difference (B).union (B.difference (A))
res = list (dif)
res.sort ()
for i in range (0, len (res)) :
    print res [i]
