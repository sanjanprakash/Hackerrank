import math
t = int (raw_input ())
while t > 0 :
    n = int (raw_input ())
    if (math.sqrt (1 + 8 * n)).is_integer () == False :
        print "-1"
    else :
        if (-1 + math.sqrt (1 + 8 * n)) / 2 >= 0 :
            print int ((-1 + math.sqrt (1 + 8 * n)) / 2)
        else :
            print int ((-1 - math.sqrt (1 + 8 * n)) / 2)
    t -= 1
