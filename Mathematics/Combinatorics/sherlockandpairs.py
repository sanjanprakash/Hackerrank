def cnt_equals (arr) :
    map_ = {}
    final_cnt = 0
    for value in arr :
        if value not in map_ :
            map_ [value] = 1
        else :
            map_ [value] += 1
    for value in map_.values ():
        if value != 1 :
            final_cnt += (value * (value - 1))
    return final_cnt

t = int (raw_input ())
while t > 0 :
    n = int (raw_input ())
    l = list (map (int, raw_input ().split ()))
    print cnt_equals (l)
    t -= 1
