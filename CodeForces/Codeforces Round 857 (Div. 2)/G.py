MOD = 10**9+7

n = int(input())
p = list(map(int, input().split()))
l = [0] * n
r = [0] * n
for i in range(n-1):
    l[i+1], r[i+1] = map(int, input().split())
m = int(input())
checks = [list(map(int, input().split())) for _ in range(m)]

adj = [[] for _ in range(n+1)]
for i in range(2, n+1):
    adj[p[i-2]].append(i)

dp = [[[0, 0] for _ in range(m+1)] for _ in range(n+1)]

def dfs(node):
    dp[node][0][0] = 1
    dp[node][0][1] = r[node] - l[node] + 1
    for child in adj[node]:
        dfs(child)
        for j in range(m+1):
            dp[node][j][0] = (dp[node][j][0] * (dp[child][j][0] + dp[child][j][1])) % MOD
