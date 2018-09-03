x,y = map(int, raw_input().split())
a,b = map(int, raw_input().split())
k = float((a*x + b*y))/float((a*a + b*b))
n = float((a*y - b*x))/float((a*a + b*b))
print k
print n
