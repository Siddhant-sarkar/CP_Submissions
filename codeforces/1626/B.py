def solve():
	max = -99
	n = (input())
	x = 0
	for i in range(len(n)-1):
		if int(n[i]) + int(n[i+1]) >= 10:
			x = i;

	print(n[:x] + str(int(n[x]) + int(n[x+1])) + n[x+2:])

# This is the drive code
# t = 1
t = int(input())
for i in range(t):
	solve()
