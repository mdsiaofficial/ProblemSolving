def acquire_skills(books):
    skill1, skill2 = False, False
    time_taken = 0
    for book in books:
        time_taken += book[0]
        if book[1][0] == '1':
            skill1 = True
        if book[1][1] == '1':
            skill2 = True
    if skill1 and skill2:
        return time_taken
    else:
        return -1

t = int(input())
for _ in range(t):
    n = int(input())
    books = []
    for _ in range(n):
        m, skills = input().split()
        books.append((int(m), skills))
    min_time = float('inf')
    for i in range(n):
        for j in range(i+1, n):
            time_taken = acquire_skills([books[i], books[j]])
            if time_taken != -1 and time_taken < min_time:
                min_time = time_taken
    if min_time == float('inf'):
        print(-1)
    else:
        print(min_time)
