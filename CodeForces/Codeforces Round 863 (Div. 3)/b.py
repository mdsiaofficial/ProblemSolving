from math import ceil

def min_energy(n, x1, y1, x2, y2):
    layer1 = max(abs(x1 - x2), abs(y1 - y2))
    layer2 = ceil((n - layer1) / 2)
    layer3 = abs(x1 + y1 - x2 - y2) // 2
    return layer1 + layer2 + layer3

t = int(input())
for _ in range(t):
    n, x1, y1, x2, y2 = map(int, input().split())
    print(min_energy(n, x1, y1, x2, y2))
