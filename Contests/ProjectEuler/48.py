L = int (raw_input ())    
d = 10    # last d digits of series
s = sum (pow (n, n, 10 ** d) for n in range (1, L + 1))
x = str (s % (10 ** d))
i = 0
while x [i] == '0' :
    i += 1
print x [i:]
