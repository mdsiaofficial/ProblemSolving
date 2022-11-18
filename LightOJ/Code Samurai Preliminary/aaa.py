from collections import defaultdict


for _ in range(int(input())):
	n = int(input())

	m = defaultdict(int)
	names = []
	for i in range(n):
		names.append(input())
		

	ans = ""
	for n in names:
		m[n[0]]+=1


	for k,v in m.items():
		if v == 3:
			ans+=k

	if not ans:
		ans = "impossible"
	else:
		ans = "".join(sorted(ans))

	print(ans)