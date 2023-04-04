#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }

        vector<int> a(n);
        a[0] = b[0];

        for (int i = 1; i < n - 1; i++) {
            if (b[i] == a[i - 1]) {
                a[i] = b[i];
            } else {
                a[i - 1] = b[i];
            }
        }

        if (a[n - 2] != b[n - 2]) {
            a[n - 1] = b[n - 2];
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
