n = int(raw_input())
s = raw_input()
li_s = list(s)
set_s = list(set(li_s))
max_ans = 0
for i in range(0,len(set_s) - 1) :
    for j in range(i + 1,len(set_s)) :
        char_a,char_b = set_s[i],set_s[j]
        ans = 0
        last_a,last_b = False,False
        for k in range(n) :
            if (li_s[k] == char_a) :
                if (last_a == True) :
                    ans = 0
                    break
                last_a = True
                last_b = False
                ans += 1
            if (li_s[k] == char_b) :
                if (last_b == True) :
                    ans = 0
                    break
                last_b = True
                last_a = False
                ans += 1
        max_ans = max(max_ans,ans)
print max_ans
