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
        int mx = 0, mn = 0, cur = 0;
        vector<int> mx_arr(n), mn_arr(n);
        for (int i = 0; i < n; i++) {
            cur += a[i];
            mx = max(mx, cur);
            mn = min(mn, cur);
            mx_arr[i] = mx;
            mn_arr[i] = mn;
        }
        mx = 0, mn = 0, cur = 0;
        for (int i = n - 1; i >= 0; i--) {
            cur += a[i];
            mx = max(mx, cur);
            mn = min(mn, cur);
            mx_arr[i] += mx;
            mn_arr[i] += mn;
        }
        for (int i = 0; i < n; i++) {
            cout << mx_arr[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << mn_arr[i] - cur << " ";
            cur -= a[i];
        }
        cout << "\n";
    }
    return 0;
}