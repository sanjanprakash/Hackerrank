x = raw_input ()
y = []
for i in x :
    if i.isupper () :
        y.append (i.lower ())
    elif i.islower () :
        y.append (i.upper ())
    else :
        y.append (i)
print ''.join (y)
