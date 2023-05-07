t = int(input())

for i in range(t):
    s = input()

    # Initialize the target string
    target = "codeforces"

    # Initialize the number of differences to 0
    diff = 0

    # Loop through each character in the strings
    for j in range(10):
        # Check if the characters differ
        if s[j] != target[j]:
            # Increment the number of differences
            diff += 1

    # Output the number of differences
    print(diff)
