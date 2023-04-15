#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, q;
        cin >> n >> m >> k >> q;
        while (q--) {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            if ((abs(x1 - x2) + abs(y1 - y2)) % k != 0) {
                cout << "-1\n"; // not possible to reach
            } else if (x1 == x2 && y1 == y2) {
                cout << "0\n"; // already at destination
            } else if ((abs(x1 - x2) / k) % 2 == (abs(y1 - y2) / k) % 2) {
                cout << abs(x1 - x2 + y1 - y2) / k << "\n"; // same parity
            } else {
                cout << "-1\n"; // opposite parity
            }
        }
    }
    return 0;
}
