t = int(input())
for _ in range(t):
    n = input()
    x = len(n)
    r = set(['0', '1', '2', '3', '4', '5', '6'])

    os = x // 6
    b = x % 6

    rr = sum(int(i) for i in n if i in r)
    w = sum(1 for i in n if i not in r)

    over = 'Overs' if os >= 1 and b>0 else 'Over'
    run = 'Runs' if rr > 1 else 'Run'
    wi = 'Wickets.' if w > 1 else 'Wicket.'

    print(f'{os}.{b} {over} {rr} {run} {w} {wi}')
