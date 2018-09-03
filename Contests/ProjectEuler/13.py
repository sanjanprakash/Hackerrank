n = int (raw_input ())
l = []
for i in range (0, n) :
    l.append (int(raw_input ()))
ans = sum(l)
ans = str(ans)
ans = ans[:10]
print ans
