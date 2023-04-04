#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }

        // Start with an array of zeros
        vector<int> a(n, 0);

        // Fill in the values of a based on b
        for (int i = 0; i < n - 1; i++) {
            a[i + 1] = max(b[i], a[i]);
        }
        for (int i = n - 2; i >= 0; i--) {
            a[i] = max(b[i], a[i + 1]);
        }

        // Output the resulting array a
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
