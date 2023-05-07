t = int(input())

for _ in range(t):
    n = int(input())
    books = []

    for i in range(n):
        m, s = input().split()
        books.append((int(m), s))

    # sort the books by the time needed to read them
    books.sort()

    # initialize the variables for the skills acquired
    s1 = False
    s2 = False

    # initialize the variable for the minimum time needed
    min_time = float('inf')

    for m, s in books:
        if s == '11':
            # if the book gives both skills, we can stop reading
            s1 = True
            s2 = True
            min_time = m
            break
        elif s == '10':
            # if the book gives skill 1, we can update the minimum time needed
            # to acquire skill 2 if we read this book
            s1 = True
            min_time = min(min_time, m)
        elif s == '01':
            # if the book gives skill 2, we can update the minimum time needed
            # to acquire skill 1 if we read this book
            s2 = True
            min_time = min(min_time, m)

        # if we have acquired both skills, we can stop reading
        if s1 and s2:
            break

    if s1 and s2:
        print(min_time)
    else:
        print(-1)
