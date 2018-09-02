x = raw_input ()
k = int (raw_input ())
n = list (x)
m = []
for i in n :
    m.append (int (i))
for i in range (0, len (m)) :
    m [i] = (m [i] + k) % 10
c = "".join (map (str, m))
print c
