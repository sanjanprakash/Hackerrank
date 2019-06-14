# Enter your code here. Read input from STDIN. Print output to STDOUT
n,m = map(int,raw_input().split())
arr = list(map(int,raw_input().split()))
A = set(map(int,raw_input().split()))
B = set(map(int,raw_input().split()))
ans = 0
for x in arr :
    if x in A :
        ans += 1
    elif x in B :
        ans -= 1
print ans 
