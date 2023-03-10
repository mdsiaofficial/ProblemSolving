#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int po = count_if(a, a+n, [](int i){ return i > 0; });
        int ne = n - po;
        vector<int> res;
        for (int i = 1; i <= po; i++) {
            res.push_back(i);
        }
        for (int i = po-1; i >= (po-ne); i--) {
            res.push_back(i);
        }
        for (int i = 0; i < ne; i++) {
            res.push_back(1);
            res.push_back(0);
        }
        for (int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
