T = int(input())

for t in range(1, T+1):
    s = input()
    n = len(s)
    ans = n
    for c in "RPS":
        cnt = 0
        for i in range(n):
            if s[i] == c:
                if s[(i+1)%n] == c or s[(i+n-1)%n] == c:
                    cnt += 1
        ans = min(ans, cnt)
    print(f"Case #{t}: {ans}")
