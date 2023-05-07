#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_len = 0, curr_len = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                curr_len++;
            } else {
                max_len = max(max_len, curr_len);
                curr_len = 0;
            }
        }

        max_len = max(max_len, curr_len);
        cout << max_len << endl;
    }

    return 0;
}
