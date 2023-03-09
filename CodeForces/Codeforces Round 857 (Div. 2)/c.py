t = int(input())

for _ in range(t):
    n, m = map(int, input().split())

    # initialize matrix with all zeros
    matrix = [[0 for j in range(m)] for i in range(n)]

    # fill first row with distinct numbers
    for j in range(m):
        matrix[0][j] = j

    # fill first column while satisfying condition
    for i in range(4, n, 4):
        matrix[i][0] = matrix[i-4][0] ^ matrix[i-4][1] ^ matrix[i][1]
        matrix[i+1][0] = matrix[i-3][0] ^ matrix[i-3][1] ^ matrix[i+1][1]
        matrix[i+2][0] = matrix[i-2][0] ^ matrix[i-2][1] ^ matrix[i+2][1]
        matrix[i+3][0] = matrix[i-1][0] ^ matrix[i-1][1] ^ matrix[i+3][1]

    # fill remaining elements while satisfying condition
    for i in range(1, n):
        for j in range(1, m):
            matrix[i][j] = matrix[i-1][j] ^ matrix[i][j-1] ^ matrix[i-1][j-1]

    # output result
    distinct_numbers = len(set(num for row in matrix for num in row))
    print(distinct_numbers)
    for row in matrix:
        print(" ".join(str(num) for num in row))
