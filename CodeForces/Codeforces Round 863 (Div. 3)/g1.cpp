#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> c(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> c[i];
        }
        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(k + 1, vector<int>(2)));
        for (int i = 1; i <= n; i++) {
            dp[i][1][0] = 1;
            dp[i][1][1] = (i == 1);
        }
        for (int j = 2; j <= k; j++) {
            for (int i = j; i <= n; i++) {
                for (int l = 1; l <= min(j, k); l++) {
                    int prev = i - l*k;
                    if (prev < j - l + 1) break;
                    dp[i][j][0] = (dp[i][j][0] + dp[prev][j - l][1]) % MOD;
                }
                if (j == k && i >= k && c[i] == c[i - k]) {
                    for (int l = 1; l <= min(j, k); l++) {
                        int prev = i - l*k;
                        if (prev < j - l + 1) break;
                        dp[i][j][1] = (dp[i][j][1] + dp[prev][j - l][0]) % MOD;
                    }
                }
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans = (ans + dp[i][k][1]) % MOD;
        }
        cout << ans << "\n";
    }
    return 0;
}
