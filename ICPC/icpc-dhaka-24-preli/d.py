MOD = 998244353

def mod_inv(x, mod):
    return pow(x, mod - 2, mod)

def solve(N, red_weights, green_weights):
    total_weight = sum(red_weights[i] + green_weights[i] for i in range(N)) % MOD
    total_expected_weight = (total_weight * mod_inv(2, MOD)) % MOD

    results = []
    for K in range(1, N + 1):
        EK = (K * mod_inv(N, MOD) % MOD) * total_expected_weight % MOD
        results.append(EK)

    print(" ".join(map(str, results)))

N = int(input())
red_weights = list(map(int, input().split()))
green_weights = list(map(int, input().split()))

solve(N, red_weights, green_weights)
