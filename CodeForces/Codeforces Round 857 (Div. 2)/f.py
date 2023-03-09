import heapq
import math

def dijkstra(adj_list, costs, start, coins):
    n = len(adj_list)
    dist = [math.inf] * n
    dist[start] = 0
    heap = [(0, start)]
    while heap:
        d, u = heapq.heappop(heap)
        if d > dist[u]:
            continue
        for v, w in adj_list[u]:
            if coins[u] < w:
                continue
            new_dist = dist[u] + costs[(u, v)]
            if new_dist < dist[v]:
                dist[v] = new_dist
                heapq.heappush(heap, (new_dist, v))
    return dist

t = int(input())
for _ in range(t):
    n, m, p = map(int, input().split())
    profits = list(map(int, input().split()))
    flights = []
    costs = {}
    for _ in range(m):
        a, b, s = map(int, input().split())
        flights.append((a-1, b-1))
        costs[(a-1, b-1)] = s
    adj_list = [[] for _ in range(n)]
    for a, b in flights:
        adj_list[a].append((b, costs[(a, b)]))
    dist = dijkstra(adj_list, costs, 0, [p] + profits[:-1])
    if dist[-1] == math.inf:
        print(-1)
    else:
        min_performances = math.ceil((dist[-1] - p) / profits[0])
        print(min_performances)
