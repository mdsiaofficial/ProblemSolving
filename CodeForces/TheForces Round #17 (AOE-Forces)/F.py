MOD = 10**9 + 7

def dfs(v, adj_list):
    if len(adj_list[v]) == 0:  # Leaf vertex
        return 1

    result = 1
    for u in adj_list[v]:
        result *= dfs(u, adj_list)
        result %= MOD

    # Add the product of all non-empty subsets of subtree vertices
    for u in adj_list[v]:
        result += result * dfs(u, adj_list)
        result %= MOD

    return result

# Read input
n = int(input())
adj_list = [[] for _ in range(n+1)]
for _ in range(n-1):
    u, v = map(int, input().split())
    adj_list[u].append(v)

# Find a non-leaf vertex to start the DFS
root = 1
while len(adj_list[root]) == 1:
    root += 1

# Calculate the minimum f(root) modulo 10^9+7
result = dfs(root, adj_list)
print(result)
