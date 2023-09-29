#include <iostream>
#include <vector>
using namespace std;
// Unsolved
const int MOD = 1000000007;

int countPrimePaths(int N, int M) {
    vector<int> dp(N + 1, 0);
    dp[0] = 1;
    
    // Define a list of prime numbers
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= min(i, M); j++) {
            dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }
    
    int totalPaths = dp[N];
    
    // Subtract paths with non-prime hole sizes
    for (int prime : primes) {
        if (prime <= N) {
            totalPaths = (totalPaths - dp[N - prime] + MOD) % MOD;
        }
    }
    
    return totalPaths;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, M;
        cin >> N >> M;
        
        int result = countPrimePaths(N, M);
        cout << result << endl;
    }
    
    return 0;
}
