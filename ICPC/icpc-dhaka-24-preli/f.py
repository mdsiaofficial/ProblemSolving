from fractions import Fraction

def solve(t, list_T):
    for i in range(t):
        x,y,z = list_T[i]
        suub = (x + y+ z) / 2
        area = (suub * (suub - x) * (suub - y) * (suub - z)) ** 0.5 / suub
        sqval = pow(area, 2)
        frval = Fraction(sqval).limit_denominator()
        if frval.denominator == 1:
            print(f"{frval.numerator}/1")
        else:
            print(f"{frval.numerator}/{frval.denominator}")

t = int(input())
list_T = []
for i in range(t):
    list_T.append(list(map(int, input().split())))

solve(t, list_T)