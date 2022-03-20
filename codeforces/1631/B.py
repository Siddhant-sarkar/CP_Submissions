def solve():
	n = int(input())
	arr = list(map(int,input().split()))
	arr.reverse()

	ans =0
	x = 0

	while x < n-1:
		# print(x)
		if arr[0] == arr[x+1] :
			x+=1
			continue
		ans+=1
		x = 1 if x==0 else 	x*2 +1
	print(ans)


# This is the drive code
# t = 1
t = int(input())
for i in range(t):
	solve()
