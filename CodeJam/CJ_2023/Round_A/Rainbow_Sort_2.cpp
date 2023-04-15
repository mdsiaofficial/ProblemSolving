#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

const int MAXN = 100005;

int n, T, a[MAXN], cnt[MAXN];
bool used[MAXN];
vector<int> v;
set<int> st;

bool check() {
    int last = 0;
    for (int i = 0; i < v.size(); i++) {
        int cur = v[i];
        if (cnt[cur] < cnt[last]) return false;
        last = cur;
    }
    return true;
}

int main() {
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        memset(cnt, 0, sizeof(cnt));
        memset(used, false, sizeof(used));
        v.clear();
        st.clear();

        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
            cnt[a[i]]++;
            st.insert(a[i]);
        }

        for (auto x : st) v.push_back(x);
        sort(v.begin(), v.end());

        int num = 1;
        for (int i = 0; i < v.size(); i++) {
            int cur = v[i];
            if (cnt[cur] > num) {
                printf("Case #%d: IMPOSSIBLE\n", t);
                goto end;
            }
            for (int j = 1; j <= n; j++) {
                if (a[j] == cur) {
                    a[j] = num;
                    used[num] = true;
                }
            }
            num++;
            while (used[num]) num++;
        }

        if (check()) {
            printf("Case #%d:", t);
            for (int i = 1; i <= n; i++) printf(" %d", a[i]);
            printf("\n");
        } else {
            printf("Case #%d: IMPOSSIBLE\n", t);
        }

        end:;
    }
    return 0;
}
