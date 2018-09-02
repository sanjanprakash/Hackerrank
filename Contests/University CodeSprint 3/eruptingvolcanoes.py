#!/bin/python

import sys

if __name__ == "__main__":
    n = int(raw_input().strip())
    maxim = -1
    grid = [[0] * n for _ in xrange(n)]
    m = int(raw_input().strip())
    for a0 in xrange(m):
        x, y, w = raw_input().strip().split(' ')
        x, y, w = [int(x), int(y), int(w)]
        count = 0
        for i in range(0,n) :
            for j in range(0,n) :
                if (abs(x - i) > abs(y - j)) :
                    if (w - abs(x - i) > 0) :
                        grid[i][j] += w - abs(x - i)
                else :
                    if (w - abs(y - j) > 0) :
                        grid[i][j] += w - abs(y - j)
                if (maxim < grid[i][j]) :
                    maxim = grid[i][j]
    print maxim
        

