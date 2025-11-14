c = 0
def sa(x, arr):
    global c
    if len(arr) == 0:
        return c
    new = []
    i = 0
    while i < x:
        if all(j==arr[0] for j in arr):
            pass
        else:
            c+=1
        new.append(arr.pop())
        i+=1
    new.pop()
    return sa(x - 1, new)

t = int(input())
for i in range(1, t + 1):
    x = int(input())
    arr = list(map(int, input().split()))
    c = 0
    print(f'Case {i}: {sa(x, arr)}')
