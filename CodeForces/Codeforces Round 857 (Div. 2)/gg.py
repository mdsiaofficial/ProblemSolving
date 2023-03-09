MOD = 10**9 + 7

def dfs(node, parent, graph, ranges, counts):
    # Update ranges and counts for current node
    low, high = ranges[node]
    counts[node] = high - low + 1
    for child in graph[node]:
        if child == parent:
            continue
        dfs(child, node, graph, ranges, counts)
        child_low, child_high = ranges[child]
        low = max(low, child_low)
        high = min(high, child_high)
        counts[node] = (counts[node] * counts[child]) % MOD
    ranges[node] = (low, high)

# Read input
n = int(input())
p = list(map(int, input().split()))
ranges = [tuple(map(int, input().split())) for _ in range(n-1)]
m = int(input())
checks = [tuple(map(int, input().split())) for _ in range(m)]

# Build tree
graph = [[] for _ in range(n+1)]
for i in range(2, n+1):
    graph[p[i-2]].append(i)

# Compute valid ranges and counts for each node
ranges = [(l, r) for l, r in ranges]
counts = [0] * (n+1)
dfs(1, 0, graph, ranges, counts)

# Answer each check
for i in range(m):
    a, b, c, d = checks[i]
    valid = True
    while a != b:
        if ranges[a][0] != ranges[c][0]:
            valid = False
            break
        a = p[a-2]
        c = p[c-2]
    if ranges[b][0] != ranges[d][0]:
        valid = False
    print(counts[1] if valid else 0)
