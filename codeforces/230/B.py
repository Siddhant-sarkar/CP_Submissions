n = 1000000
pr = [1] * n
st = set()
for i in range(2,n):
	if(pr[i]):
		st.add(i*i)
		for j in range(i*i,n,i):
			pr[j] = 0

l =int(input())
arr = map(int, input().split())
for x in arr:
	if(x in st):
		print("YES")
	else: 
		print("NO")

