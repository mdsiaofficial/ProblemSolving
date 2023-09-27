#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> l(k), r(k);
        for (int i = 0; i < k; i++) {
            cin >> l[i];
        }
        for (int i = 0; i < k; i++) {
            cin >> r[i];
        }
        cin >> q;
        vector<int> x(q);
        for (int i = 0; i < q; i++) {
            cin >> x[i];
        }

        for (int i = 0; i < q; i++) {
            int idx = -1;
            for (int j = 0; j < k; j++) {
                if (l[j] <= x[i] && x[i] <= r[j]) {
                    idx = j;
                    break;
                }
            }

            if (idx != -1) {
                int a = min(x[i], r[idx] + l[idx] - x[i]);
                int b = max(x[i], r[idx] + l[idx] - x[i]);
                reverse(s.begin() + a - 1, s.begin() + b);
            }
        }

        cout << s << endl;
    }

    return 0;
}
