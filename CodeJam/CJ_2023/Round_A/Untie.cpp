#include <iostream>
#include <cstring>
using namespace std;

const int MAXN = 1005;

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        char s[MAXN];
        cin >> s;
        int n = strlen(s);
        int ans = n;
        for (char c = 'R'; c <= 'S'; c++) {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == c) {
                    if (s[(i+1)%n] == c || s[(i+n-1)%n] == c) cnt++;
                }
            }
            ans = min(ans, cnt);
        }
        cout << "Case #" << t << ": " << ans << endl;
    }
    return 0;
}
