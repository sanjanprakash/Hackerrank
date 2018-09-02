from __future__ import division
n = int (raw_input ())
d = {}
for i in range (0, n) :
    line = raw_input ()
    marks = line.split (' ')
    tot = float (marks [1]) + float (marks [2]) + float (marks [3])
    avg = tot / 3
    d [marks [0]] = avg
text = raw_input ()
print "%.2f" %d [text]
    
