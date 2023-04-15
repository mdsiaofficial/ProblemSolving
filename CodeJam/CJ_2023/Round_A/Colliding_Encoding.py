def check_collision(mapping, words):
    encoding = {}
    for word in words:
        code = ''.join([str(mapping[c]) for c in word])
        if code in encoding:
            return True
        else:
            encoding[code] = word
    return False

# main function to read input and output results
if __name__ == '__main__':
    # read number of test cases
    T = int(input())

    # loop through each test case
    for i in range(1, T+1):
        # read mapping and number of words
        mapping = list(map(int, input().split()))
        N = int(input())

        # read list of words
        words = []
        for j in range(N):
            words.append(input())

        # check for collisions and output result
        result = 'YES' if check_collision(mapping, words) else 'NO'
        print('Case #{}: {}'.format(i, result))
