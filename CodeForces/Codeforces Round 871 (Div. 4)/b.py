t = int(input())   # number of test cases

for i in range(t):
    n = int(input())   # length of the array
    a = list(map(int, input().split()))   # elements of the array
    
    max_len = 0   # variable to store the maximum length of blank space found so far
    curr_len = 0   # variable to store the current length of blank space
    
    for j in range(n):
        if a[j] == 0:   # if the current element is 0
            curr_len += 1   # increment the current length of blank space
        else:   # if the current element is 1
            max_len = max(max_len, curr_len)   # update the maximum length of blank space found so far
            curr_len = 0   # reset the current length of blank space
    
    max_len = max(max_len, curr_len)   # update the maximum length of blank space found so far
    
    print(max_len)   # print the maximum length of blank space for the current test case
