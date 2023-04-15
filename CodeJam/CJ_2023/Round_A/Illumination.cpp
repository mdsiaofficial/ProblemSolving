#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int M, R, N;
        cin >> M >> R >> N;
        vector<int> X(N);
        for (int i = 0; i < N; i++) {
            cin >> X[i];
        }
        int i = 0, ans = 0;
        while (i < N) {
            // Find the rightmost light that covers the current light
            int j = i;
            while (j < N && X[j] - X[i] <= R) {
                j++;
            }
            if (j == i) {
                // No light covers the current light
                ans = -1;
                break;
            }
            // Place a new light at the leftmost point that is not covered
            ans++;
            int p = X[j - 1];
            while (i < N && X[i] - p <= R) {
                i++;
            }
        }
        cout << "Case #" << t << ": ";
        if (ans == -1) {
            cout << "IMPOSSIBLE" << endl;
        } else {
            cout << ans << endl;
        }
    }
    return 0;
}
