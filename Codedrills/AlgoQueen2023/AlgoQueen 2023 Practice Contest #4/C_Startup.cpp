#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    int lo = 1, hi = 1000000;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        long long earnings = 0;
        for (int i = 0; i < n; i++) {
            earnings += min(a[i], mid) * b[i];
        }
        if (earnings >= mid) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    cout << lo << endl;
    return 0;
}
