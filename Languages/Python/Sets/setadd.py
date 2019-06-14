# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(raw_input())
stamps = set()
while n > 0 :
    x = raw_input()
    stamps.add(x)
    n -= 1
print len(stamps)
