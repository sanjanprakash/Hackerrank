n,m = map(int,raw_input().split())
dp,arr = [],[]
for i in range(0,n) :
	temp = map(int,raw_input().split())
	rrow,lrow,ans = [0] * m,[0] * m,[0] * m
	arr.append(temp)
	lrow[0] = temp[0]
	rrow[m - 1] = temp[m - 1]
	for j in range(1,m) :
		if (lrow[j - 1] < 0) :
			lrow[j] = temp[j]
		else :
			lrow[j] = lrow[j - 1] + temp[j]
		if (rrow[m - j] < 0) :
			rrow[m - j - 1] = temp[m - j - 1]
		else :
			rrow[m - j - 1] = rrow[m - j] + temp[m - j - 1]
	dp.append([lrow[j] + rrow[j] - temp[j] for j in range(len(temp))])
	if (i > 0) :
		for j in range(0,m) :
			dp[i][j] += dp[i - 1][j]
print max(dp[n - 1])
