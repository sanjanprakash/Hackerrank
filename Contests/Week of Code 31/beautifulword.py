#!/bin/python

import sys

def Beauty(word) :
    forbid = ['a','e','i','o','u','y']
    flag = 0
    for i in range(0,len(word) - 1) :
        if (word[i] == word[i + 1]) :
            flag = 1
            break
        elif (word[i] in forbid and word[i + 1] in forbid) :
            flag = 1
            break
    if (flag == 1) :
        print "No"
    else :
        print "Yes"
    
w = list(raw_input().strip())
Beauty(w)
# Print 'Yes' if the word is beautiful or 'No' if it is not.
