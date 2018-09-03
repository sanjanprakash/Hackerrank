t = int (raw_input ())
while t > 0 :
    n, k = map (int, raw_input ().split ())
    num = list (raw_input ())
    maxim = 0
    for i in range (0, n - k) :
        prod = 1
        for j in range (i, i + k) :
            prod = prod * int (num [j])
        if prod > maxim :
            maxim = prod
    print maxim
    t = t - 1
