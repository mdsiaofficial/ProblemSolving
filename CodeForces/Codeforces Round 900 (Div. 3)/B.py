def solve(n):
    # Initialize the array with the first three elements
    arr = [2, 3, 4]
    
    # Start with the next integer after 4
    current = 5
    
    # Loop to construct the array
    for i in range(n - 3):
        # Check if 3*current is divisible by the sum of the last two elements
        while (3 * current) % (arr[-2] + arr[-1]) == 0:
            current += 1
        
        # Append the current integer to the array
        arr.append(current)
        current += 1
    
    return arr

# Input
t = int(input())
for _ in range(t):
    n = int(input())
    result = solve(n)
    print(*result)
