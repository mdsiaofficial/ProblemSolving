#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

int countInterestingSequences(const string &P, const string &Q) {
    int m = P.length();
    int n = Q.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            if (P[j - 1] == Q[i - 1]) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1] + 1) % MOD;
            }
        }
    }

    int result = 0;
    for (int j = 1; j <= m; j++) {
        result = (result + dp[n][j]) % MOD;
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        string P, Q;
        cin >> P >> Q;
        int numInterestingSequences = countInterestingSequences(P, Q);
        cout << "Case " << t << ": " << numInterestingSequences << endl;
    }

    return 0;
}
