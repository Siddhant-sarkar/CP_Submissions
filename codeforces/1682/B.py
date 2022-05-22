t=int(input())
for _ in range(t):
	n=int(input())
	arr=list(map(int,input().split()))
	ans=-1
	for i in range(n):
		if(i!=arr[i]):
			if(ans==-1):
				ans=arr[i]
			else:
				ans &= arr[i]
	print(ans)