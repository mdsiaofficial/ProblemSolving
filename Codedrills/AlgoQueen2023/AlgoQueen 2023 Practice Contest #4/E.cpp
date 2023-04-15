#include <iostream>
#include <vector>
#include <map>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int, int> count;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int l = lcm(a[i], a[j]);
            if (l == max(a[i], a[j])) {
                int p = (a[i] < a[j]) ? i : j;
                count[p]++;
            }
        }
    }
    int ans = 0;
    for (auto p : count) {
        ans += p.second * (n - p.second - 1);
    }
    cout << ans << endl;
    return 0;
}
