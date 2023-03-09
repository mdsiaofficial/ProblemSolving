t = int(input())

for _ in range(t):
    n = int(input())
    plan = list(map(int, input().split()))
    
    num_guinea_pigs = 0
    num_aviaries = 0
    gender_counts = {'M': 0, 'F': 0}
    
    for action in plan:
        if action == 1:
            # buying a new guinea pig, so add to count and aviary
            num_guinea_pigs += 1
            num_aviaries += 1
        else:
            # determining gender of existing guinea pigs
            # if there are no guinea pigs yet, do nothing
            if num_guinea_pigs > 0:
                # check if there are pairs of opposite gender
                if gender_counts['M'] > 0 and gender_counts['F'] > 0:
                    # if so, put them in an aviary together
                    num_aviaries -= 1
                    gender_counts['M'] = 0
                    gender_counts['F'] = 0
                # count the genders of all guinea pigs
                for _ in range(num_guinea_pigs):
                    gender = input().strip()
                    gender_counts[gender] += 1
    
    print(num_aviaries)
