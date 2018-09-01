results = ['s','f','f','f','f']
while (len(results) < 100) :
    if (results[len(results) - 5] == 's' or results[len(results) - 3] == 's' or results[len(results) - 2] == 's') :
        results.append('f')
    else :
        results.append('s')
        
t = int(raw_input())
while (t > 0) :
    n = int(raw_input())
    if (results[n - 1] == 's') :
        print "Second"
    else :
        print "First"
    t -= 1
