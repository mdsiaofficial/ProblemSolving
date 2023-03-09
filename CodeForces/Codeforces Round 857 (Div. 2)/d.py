t = int(input())
for _ in range(t):
    n = int(input())
    a, b = [], []
    for _ in range(n):
        x, y = map(int, input().split())
        a.append(x)
        b.append(y)
    a.sort()
    b.sort()
    ans = abs(a[0] - b[0])
    for i in range(1, n):
        ans = min(ans, abs(a[i] - b[i]), abs(a[i-1] - b[i-1]))
    print(ans)
