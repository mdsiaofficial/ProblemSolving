#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int W, N, D;
        cin >> W >> N >> D;
        vector<int> X(W);
        for (int i = 0; i < W; i++) {
            
        }
        int moves = 0;
        for (int i = 0; i < W/2; i++) {
            int j = W - 1 - i;
            int diff = abs(X[i] - X[j]);
            if (diff % D != 0) {
                cout << "Case #" << t << ": IMPOSSIBLE\n";
                goto done;
            }
            int m = diff / D;
            moves += m;
        }
        cout << "Case #" << t << ": " << moves << "\n";
        done:;
    }
    return 0;
}