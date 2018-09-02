#!/bin/python

import sys

def acidNaming(acid_name):
    ans = ["non-metal acid","polyatomic acid","not an acid"]
    if (acid_name[-2:] == "ic") :
        if (acid_name[:5] == "hydro") :
            return ans[0]
        else :
            return ans[1]
    else :
        return ans[2]

if __name__ == "__main__":
    n = int(raw_input().strip())
    for a0 in xrange(n):
        acid_name = raw_input().strip()
        result = acidNaming(acid_name)
        print result

