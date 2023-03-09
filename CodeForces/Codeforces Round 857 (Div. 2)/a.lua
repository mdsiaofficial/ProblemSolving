for each test case:
    read n
    read a
    likes = 0
    max_likes = 0
    min_likes = 0
    for i from 1 to n:
        if a[i] > 0:
            likes += 1
        else:
            if likes > 0:
                likes -= 1
        max_likes = max(max_likes, likes)
        min_likes = min(min_likes, likes)
        output max_likes
    output newline
    likes = 0
    max_likes = 0
    min_likes = 0
    for i from 1 to n:
        if a[i] > 0:
            likes += 1
        else:
            if likes > 0:
                likes -= 1
        max_likes = max(max_likes, likes)
        min_likes = min(min_likes, likes)
        output min_likes
    output newline