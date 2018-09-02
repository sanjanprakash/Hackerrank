def Check(x) :
	if ('4' not in set(list(x)) or '7' not in set(list(x)) or len(set(list(x))) != 2) :
		return False
	else :
		cf,cs = 0,0
		for c in x :
			if (c == '4') :
				cf += 1
			else :
				cs += 1
		if (cf == cs) :
			return True
		else :
			return False
	
n = input()

m = 1000000001
ans = -1
for i in range(0,n) :
	a,b = raw_input().split()
	if (Check(b) == True) :
		if (int(b) < m) :
			m = int(b)
			ans = a

print ans
