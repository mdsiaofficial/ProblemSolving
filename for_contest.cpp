#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    forn(_, t){
        int n, m;
        scanf("%d%d", &n, &m);
        vector<pair<int, int>> a(m);
        forn(i, m){
            scanf("%d%d", &a[i].first, &a[i].second);
            --a[i].first, --a[i].second;
        }
        bool ans = false;
        forn(i, m) forn(x, n) forn(y, n) if ((x == a[i].first) ^ (y == a[i].second)){
            bool ok = true;
            forn(j, m) if (i != j){
                ok &= x != a[j].first && y != a[j].second;
            }
            ans |= ok;
        }
        puts(ans ? "YES" : "NO");
    }
}