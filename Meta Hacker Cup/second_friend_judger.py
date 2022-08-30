#!/usr/bin/python
#########################################################################
#                                                                       #
# Meta Hacker Cup 2022: Qualification Round                             #
# Problem B1/B2: Second (Second) Friend                                 #
#                                                                       #
# Usage: second_friend_judger.py <input_file> <output_file>             #
#                                                                       #
#########################################################################

import re
import sys
from collections import deque


R = 0
C = 0
G = []
bad = []


def good(i, j):
    global G, bad
    return 0 <= i < R and 0 <= j < C and G[i][j] != '#' and not bad[i][j];


def num_good_adj(i, j):
    return good(i - 1, j) + good(i + 1, j) + good(i, j - 1) + good(i, j + 1)


def is_possible():
    global G, bad
    has_tree = any('^' in row for row in G)
    if has_tree and (R < 2 or C < 2):
        return False

    q = deque()
    bad = [[False for j in range(C)] for i in range(R)]
    for i in range(R):
        for j in range(C):
            if num_good_adj(i, j) < 2:
                q.append((i, j))
    while q:
        i, j = q.popleft()
        if good(i, j) and num_good_adj(i, j) < 2:
            if G[i][j] == '^':
                return False
            bad[i][j] = True
            q.append((i-1, j))
            q.append((i+1, j))
            q.append((i, j-1))
            q.append((i, j+1))

    return True


def WA(msg):
    print('\nWrong answer:', msg)
    sys.exit(1)


if __name__ == '__main__':
    if len(sys.argv) != 3:
        print('Please specify input and output files. Usage:')
        print('  second_friend_judger.py <input_file> <output_file>')
        sys.exit(1)

    with open(sys.argv[1]) as fi, open(sys.argv[2]) as fo:
        T = int(next(fi))
        for t in range(1, T+1):
            print('Judging case ', t, ' of ', T, '...', end='\r', sep='')
            R, C = map(int, next(fi).strip().split())
            G = []
            for i in range(R):
                G.append(next(fi).strip())

            line = next(fo).strip()
            match = re.search(r"Case #(\d+): (Possible|Impossible)", line)
            if not match or int(match.group(1)) != t:
                WA('Case number does not match')

            really_is_possible = is_possible()
            if match.group(2) == "Impossible":
                if really_is_possible:
                    WA('Expected `Possible`, got `Impossible`')
                continue

            if not really_is_possible:
                WA('Expected `Impossible`, got `Possible`')

            ans = []
            for i in range(R):
                row = next(fo).strip()
                if len(row) != C:
                    WA('Invalid number of columns')
                ans.append(row)

            for i in range(R):
                for j in range(C):
                    assert G[i][j] in '.^#'
                    if G[i][j] in '^#' and G[i][j] != ans[i][j]:
                        WA('Cannot modify existing trees or rocks')
                    if G[i][j] == '.' and ans[i][j] not in '.^':
                        WA('Invalid modification of empty space')

                    if ans[i][j] == '^':
                        num_friends = 0
                        for r, c in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
                            if 0 <= r < R and 0 <= c < C and ans[r][c] == '^':
                                num_friends += 1
                        if num_friends < 2:
                            WA('Not enough friends')

    print('\nAll correct!')