n = int (raw_input ())
arr = map (int, raw_input ().split ())
for i in range (1, n + 1) :
    print arr.index (i) + 1
