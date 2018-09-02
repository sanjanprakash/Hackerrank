n = int(raw_input())
while (n > 0) :
    num = int(raw_input())
    print ((2 ** 32) - 1) ^ num
    n -= 1
