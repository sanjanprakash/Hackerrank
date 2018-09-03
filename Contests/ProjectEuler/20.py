import math
t = int (raw_input ())
while t > 0 :
    print sum (list (map (int, (str (math.factorial (int (raw_input ())))))))
    t -= 1
