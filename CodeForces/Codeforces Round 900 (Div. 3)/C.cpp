#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        
        // Check if it's possible to choose k distinct integers between 1 and n
        if (k * (k + 1) / 2 <= x && x <= k * (2 * n - k + 1) / 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
