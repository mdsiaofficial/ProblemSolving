#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = true;
        char curr = '0'; // start with 0
        for (int i = 0; i < n; i++) {
            if (s[i] == curr) {
                // if current character is same as last one, we can't make it alternating
                flag = false;
                break;
            }
            if (curr == '0') {
                // if last character was 0, set current character to 1
                curr = '1';
            } else {
                // if last character was 1, set current character to 0
                curr = '0';
            }
        }
        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
