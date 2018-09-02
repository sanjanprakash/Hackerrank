#!/bin/python

import sys

def raceAgainstTime(n, mason_height, heights, prices):
    cost = 0
    curr_ht = mason_height
    for i in range(len(heights)) :
        if (curr_ht < heights[i]) :
            cost += 1 + abs(heights[i] - curr_ht) + prices[i]
            curr_ht = heights[i]
        else :
            if (abs(heights[i] - curr_ht) + prices[i] < 0) :
                cost += 1 + abs(heights[i] - curr_ht) + prices[i]
                curr_ht = heights[i]
            else :
                cost += 1
    return cost + 1
        

if __name__ == "__main__":
    n = int(raw_input().strip())
    mason_height = int(raw_input().strip())
    heights = map(int, raw_input().strip().split(' '))
    prices = map(int, raw_input().strip().split(' '))
    result = raceAgainstTime(n, mason_height, heights, prices)
    print result
