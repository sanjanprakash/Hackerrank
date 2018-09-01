#!/bin/python

import sys
def Check(s) :
    mult = 10
    change,new = False, True
    begin, size = 0,1
    if (len(s) == 1) :
        return -1
    while (begin + size <= len(s)) :
        if (s[begin] == '0') :
            begin = 0
            new = True
            if (change == True) :
                change = False   
            else :
                mult *= 10
                size += 1
        
        
        else :
            if (new == False) :
                second = int(s[begin:begin + size])
                #print "Hello",second
                if (second - start != 1) :
                    begin = 0
                    new = True
                    abs_start = -1
                    if (change == True) :
                        change = False
                    else :
                        size += 1
                        mult *= 10
                else :
                    begin += size
                    if (change == False) :
                        if ((second + 1) % mult == 0) :
                            mult *= 10
                            change = True
                            size += 1
                    start = second
            
            #New link
            else :
                start = int(s[begin:begin + size])
                #print "Hi",start
                if (begin == 0) :
                    abs_start = start
                    new = False
                begin += size
                if ((start + 1) % mult == 0) :
                    mult *= 10
                    change = True
                    size += 1
                    
    if (size == len(s)) :
        return -1
    
    if (begin == len(s)) :
        return abs_start
    else :
        return -1
    
q = int(raw_input().strip())
for a0 in xrange(q):
    s = raw_input().strip()
    res = Check(s)
    if (res == -1) :
        print "NO"
    else :
        print "YES " + str(res)
    # your code goes here
