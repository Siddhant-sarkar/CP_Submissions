n , m = map(int,input().split()) 
d = dict(input().split() for _ in range(m)) 	
for w in input().split():
	print((min(w,d[w],key = len)) , end=" ")
