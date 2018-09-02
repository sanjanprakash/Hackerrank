x = raw_input ()
n = list (x)
m = []
for i in n :
    m.append (int (i))
for i in range (0, len (m)) :
    m [i] = (m [i] + 1) % 10
c = "".join (map (str, m))
#c = "".join (c)
print c
