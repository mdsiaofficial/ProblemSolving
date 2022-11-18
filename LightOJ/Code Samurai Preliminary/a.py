from collections import defaultdict


for _ in range(int(input())):
	n = int(input())

	m = defaultdict(int)
	for i in range(n):
		a = input()
		m[a[0]]+=1

	ans = "impossible"
	for k,v in m.items():
		if v == 3:
			ans = k
			break

	print(ans)