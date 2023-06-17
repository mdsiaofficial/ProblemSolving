MOD = int(1e9) + 7

def count_prime_xor(t, test_cases):
    def count_ones(n):
        count = 0
        while n:
            count += 1
            n &= n - 1
        return count

    def generate_combinations(l1, r1, l2, r2, l3, r3):
        count = 0
        for i in range(l1, r1 + 1):
            for j in range(l2, r2 + 1):
                for k in range(l3, r3 + 1):
                    xor = i ^ j ^ k
                    if count_ones(xor) in [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31]:
                        count = (count + 1) % MOD
        return count

    results = []
    for i in range(t):
        l1, r1 = test_cases[i][0]
        l2, r2 = test_cases[i][1]
        l3, r3 = test_cases[i][2]
        result = generate_combinations(l1, r1, l2, r2, l3, r3)
        results.append(result)
    return results

# Reading input
t = int(input())
test_cases = []
for _ in range(t):
    armies = [list(map(int, input().split())) for _ in range(3)]
    test_cases.append(armies)

# Counting prime XOR combinations
results = count_prime_xor(t, test_cases)

# Printing results
for result in results:
    print(result)
