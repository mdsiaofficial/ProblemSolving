import math

def max_participants(t, test_cases):
    results = []
    
    for i in range(t):
        B, y = test_cases[i]
        m = int(math.log2(B))
        
        # Calculate the maximum number of problems that can be prepared
        max_problems = B // y
        
        # Distribute problems equally between the two rounds
        problems_round1 = m // 2
        problems_round2 = m - problems_round1
        
        # Calculate the cost of preparing problems and hosting the rounds
        cost = (problems_round1 + problems_round2) * y + problems_round1**2 + problems_round2**2
        
        # Check if the cost exceeds the budget
        while cost > B:
            m -= 1
            problems_round1 = m // 2
            problems_round2 = m - problems_round1
            cost = (problems_round1 + problems_round2) * y + problems_round1**2 + problems_round2**2
        
        # Calculate the maximum number of participants
        max_participants = 2 ** m
        
        results.append(max_participants)
    
    return results

# Input
t = int(input())
test_cases = []
for _ in range(t):
    B, y = map(int, input().split())
    test_cases.append((B, y))

# Calculate and print the results
results = max_participants(t, test_cases)
for result in results:
    print(result)
