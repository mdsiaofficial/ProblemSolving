from collections import defaultdict


for _ in range(int(input())):
	n = int(input())

	m = defaultdict(int)
	names = []
	for i in range(n):
		names.append(input())
		

	ans = "impossible"
	for n in names:
		m[n[0]]+=1

		if m[n[0]] == 3:
			ans = n[0]
			break


	print(ans)