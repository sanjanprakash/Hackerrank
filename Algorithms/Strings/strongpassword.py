n = int(raw_input())
passwd = raw_input()
ans = 0
if any(i.islower() for i in passwd) == False :
    ans += 1
if any(i.isupper() for i in passwd) == False :
    ans += 1
if any(i.isdigit() for i in passwd) == False :
    ans += 1
if any(i in "!@#$%^&*()-+" for i in passwd) == False :
    ans += 1
print max(ans,6 - n)
