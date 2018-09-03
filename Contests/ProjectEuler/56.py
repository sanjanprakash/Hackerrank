n = int (raw_input ())
a = 2
ma = 0
while a < n :
    b = 1
    while b < n :
        su = sum (list (map (int, list (str (a ** b)))))
        if ma < su :
            ma = su
        b += 1
    a += 1
print ma    
    
