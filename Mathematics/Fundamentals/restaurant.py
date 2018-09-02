n = int (raw_input ())
while n > 0 :
    inp = list (map (int, raw_input ().split ()))
    i = inp [0]
    if inp [0] > inp [1] :
        i = inp [1]
    while (inp [0] % i) != 0 or (inp [1] % i) != 0 :
        i = i - 1
    #print i
    print (inp [0] * inp [1]) / (i * i)
    n = n - 1
