import sys

def orientation(p, q, r):
    val = (q[1] - p[1]) * (r[0] - q[0]) - (q[0] - p[0]) * (r[1] - q[1])
    if val == 0:
        return 0  
    elif val > 0:
        return 1 
    else:
        return 2 

def on_segment(p, q, r):
    return (q[0] <= max(p[0], r[0]) and q[0] >= min(p[0], r[0]) and
            q[1] <= max(p[1], r[1]) and q[1] >= min(p[1], r[1]))

def do_intersect(p1, q1, p2, q2):
    o1 = orientation(p1, q1, p2)
    o2 = orientation(p1, q1, q2)
    o3 = orientation(p2, q2, p1)
    o4 = orientation(p2, q2, q1)
    
    if o1 != o2 and o3 != o4:
        return True
    
    if o1 == 0 and on_segment(p1, p2, q1):
        return True
    if o2 == 0 and on_segment(p1, q2, q1):
        return True
    if o3 == 0 and on_segment(p2, p1, q2):
        return True
    if o4 == 0 and on_segment(p2, q1, q2):
        return True
    
    return False

def solve():
    input = sys.stdin.read
    data = input().split()
    index = 0
    T = int(data[index])
    index += 1
    results = []

    for t in range(1, T + 1):
        N, M = int(data[index]), int(data[index + 1])
        index += 2
        routers = []

        for _ in range(N):
            x, y = int(data[index]), int(data[index + 1])
            routers.append((x, y))
            index += 2
        
        wires = []
        isp = []

        for i in range(M):
            u, v, l = int(data[index]) - 1, int(data[index + 1]) - 1, int(data[index + 2])
            wires.append((u, v))
            isp.append(l)
            index += 3
        
        wires_to_remove = set()

        for i in range(M):
            for j in range(i + 1, M):
                if isp[i] != isp[j]:  
                    u1, v1 = wires[i]
                    u2, v2 = wires[j]
                    if do_intersect(routers[u1], routers[v1], routers[u2], routers[v2]):
                        wires_to_remove.add(i + 1)

        results.append(f"Case #{t}:")
        results.append(str(len(wires_to_remove)))
        if wires_to_remove:
            results.append(" ".join(map(str, sorted(wires_to_remove))))
        else:
            results.append("")

    print("\n".join(results))

solve()
