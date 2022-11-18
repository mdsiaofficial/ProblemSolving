#include <stdio.h>
#include <string.h>
int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
        char m[26] = {0};

        for(int i = 0; i < n; i++) {
            char s[10]; scanf("%s", s);
            m[s[0] - 'a']++;
        }

        char ans[] = "impossible";

        for(int i = 0; i < 26; i++) {
            if(m[i] == 3) {
                ans[0] = 'a' + i; break;
            }
        }

        printf("%s\n", ans);

    }

    return 0;
}