def count_letters(i, letter):
    if i == 0:
        return 1
    cnt = 2**(i-1)
    if letter != 'A':
        cnt *= 2
    return cnt

def get_nth_letter(n):
    i = 0
    letter = 'A'
    while True:
        cnt = count_letters(i, letter)
        if n <= cnt:
            break
        n -= cnt
        letter = chr(ord(letter) + 1)
        if letter > 'Z':
            letter = 'A'
            i += 1
    return chr(ord(letter) + (n-1) // count_letters(i, letter//2))

T = int(input())
for t in range(1, T+1):
    N = int(input())
    print("Case #{}: {}".format(t, get_nth_letter(N)))
