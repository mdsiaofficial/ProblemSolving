def luckiness(x):
    s = str(x)
    max_digit, min_digit = 0, 10
    for c in s:
        digit = int(c)
        max_digit = max(max_digit, digit)
        min_digit = min(min_digit, digit)
    return max_digit - min_digit

t = int(input())
for _ in range(t):
    l, r = map(int, input().split())
    max_luckiness = -1
    best_starship = 0
    for x in range(l, r+1):
        x_luckiness = luckiness(x)
        if x_luckiness > max_luckiness:
            max_luckiness = x_luckiness
            best_starship = x
        elif x_luckiness == max_luckiness:
            best_starship = max(best_starship, x)
    print(best_starship)
