def count_distinct_values(moves):
    distinct_values = set()
    distinct_values.add(0)  # Initial value of X is 0

    # Perform moves
    for i in range(1, moves + 1):
        temp_set = set(distinct_values)  # Copy current distinct values

        # Increment X by 2 for each distinct value
        for val in temp_set:
            distinct_values.add(val + 2)

        # Decrement X by 1 for each distinct value
        for val in temp_set:
            distinct_values.add(val - 1)

    return len(distinct_values)


if __name__ == '__main__':
    T = int(input())

    while T > 0:
        moves = int(input())

        distinct_values = count_distinct_values(moves)
        print(distinct_values)

        T -= 1
