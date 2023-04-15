#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    int T;
    cin >> T;
    for(int t = 1; t <= T; t++) {
        int n, la, ra, lb, rb;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        cin >> la >> ra >> lb >> rb;
        ll alice = 0, bob = 0, cur = 0;
        for(int i = la-1; i < ra; i++) cur += a[i];
        alice = cur;
        cur = 0;
        for(int i = lb-1; i < rb; i++) cur += a[i];
        bob = cur;
        cur = 0;
        for(int i = la-2; i >= 0; i--) {
            cur += a[i];
            alice = max(alice, cur + bob);
        }
        cur = 0;
        for(int i = ra; i < n; i++) {
            cur += a[i];
            alice = max(alice, cur + bob);
        }
        cur = 0;
        for(int i = lb-2; i >= 0; i--) {
            cur += a[i];
            bob = max(bob, cur + alice);
        }
        cur = 0;
        for(int i = rb; i < n; i++) {
            cur += a[i];
            bob = max(bob, cur + alice);
        }
        cout << "Case #" << t << ": " << alice << endl;
    }
    return 0;
}
