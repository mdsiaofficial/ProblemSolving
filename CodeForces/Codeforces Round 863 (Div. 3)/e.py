def count_live_sequence(prefix):
    """Counts the number of elements in the live sequence that have the given prefix."""
    count = 0
    for digit in range(10):
        if digit == 4:
            continue
        if prefix == 0 and digit == 0:
            continue
        if prefix * 10 + digit >= limit:
            break
        count += 1
        count += count_live_sequence(prefix * 10 + digit)
    return count

def find_live_number(k):
    """Finds the kth element in the live sequence."""
    n = 0
    prefix = 0
    while True:
        for digit in range(10):
            if digit == 4:
                continue
            if prefix == 0 and digit == 0:
                continue
            count = count_live_sequence(prefix * 10 + digit)
            if k <= count:
                n = n * 10 + digit
                prefix = prefix * 10 + digit
                break
            k -= count
        else:
            return n

t = int(input())
for i in range(t):
    k = int(input())
    print(find_live_number(k))
