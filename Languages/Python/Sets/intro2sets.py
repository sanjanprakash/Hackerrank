from __future__ import division

def average(array):
    plants = set(array)
    return sum(plants)*1.0/len(plants)

if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    result = average(arr)
    print result
