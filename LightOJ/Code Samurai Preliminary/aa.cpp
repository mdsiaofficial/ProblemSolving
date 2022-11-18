#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        char m[26] = {0};

        for(int i = 0; i < n; i++) {
            char s[10]; cin >> s;
            m[s[0] - 'a']++;
        }

        char ans[] = "impossible";

        for(int i = 0; i < 26; i++) {
            if(m[i] == 3) {
                ans[0] = 'a' + i; break;
            }
        }

        cout << ans << endl;

    }

    return 0;
}