def find_operations_to_substring(t, test_cases):
    results = []

    for i in range(t):
        n, m, x, s = test_cases[i]

        if s in x:
            results.append(0)
        else:
            cnt = 1
            while len(x) < 100:  # Limit the length to 100 as specified in the problem.
                x += x
                if s in x:
                    results.append(cnt)
                    break
                cnt += 1
            else:
                results.append(-1)

    return results

t = int(input())
test_cases = []

for _ in range(t):
    n, m = map(int, input().split())
    x = input().strip()
    s = input().strip()
    test_cases.append((n, m, x, s))

results = find_operations_to_substring(t, test_cases)
for result in results:
    print(result)
