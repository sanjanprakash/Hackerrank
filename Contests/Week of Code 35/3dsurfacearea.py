h,w = map(int,raw_input().split())
arr = []
for i in range(0,h) :
	arr.append(map(int,raw_input().split()))
ans = 2 * h * w
for i in range(0,h) :
	ans += arr[i][0]
	if (w > 1) :
		for j in range(0,w - 1) :
			ans += max(0,arr[i][j + 1] - arr[i][j])
for i in range(0,h) :
	ans += arr[i][w - 1]
	if (w > 1) :
		for j in range(w - 1,0,-1) :
			ans += max(0,arr[i][j - 1] - arr[i][j])
for j in range(0,w) :
	ans += arr[0][j]
	if (h > 1) :
		for i in range(0,h - 1) :
			ans += max(0,arr[i + 1][j] - arr[i][j])
for j in range(0,w) :
	ans += arr[h - 1][j]
	if (h > 1) :
		for i in range(h - 1,0,-1) :
			ans += max(0,arr[i - 1][j] - arr[i][j])
print ans
