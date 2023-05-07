t = int(input())

for _ in range(t):
    n = int(input())
    books = []
    for i in range(n):
        m, s = input().split()
        m = int(m)
        s = int(s, 2)
        books.append((m, s))
    books.sort()
    skills = 0
    time = 0
    for book in books:
        if skills == 3:
            break
        if book[1] & ~skills != 0:
            skills |= book[1]
            time += book[0]
    if skills == 3:
        print(time)
    else:
        print(-1)
