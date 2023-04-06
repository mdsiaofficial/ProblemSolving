#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, L, a; // input variables
    cin >> n >> L >> a;
    int ans = 0; // answer variable
    int prev = 0; // previous time when a customer arrived or left
    for (int i = 0; i < n; i++) {
        int t, l; // arrival and service time of the i-th customer
        cin >> t >> l;
        ans += (t - prev) / a; // add the number of breaks before the i-th customer
        prev = t + l; // update the previous time
    }
    ans += (L - prev) / a; // add the number of breaks after the last customer
    cout << ans << endl; // output the answer
    return 0;
}