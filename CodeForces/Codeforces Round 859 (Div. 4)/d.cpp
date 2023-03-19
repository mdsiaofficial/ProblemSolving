#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int s = 0; s < t; s++) {
        int n, q;
        cin >> n >> q;
        int array[n];
        string outputs[q];

        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }
        for (int i = 0; i < q; i++) {
            string result = "YES";
            int l, r, k;
            cin >> l >> r >> k;

            int count = 0;
            for (int j = 0; j < n; j++) {
                if (j >= (l - 1) && j <= (r - 1)) {
                    count += k;
                }
                else {
                    count += array[j];
                }
            }
            if (count % 2 == 0) {
                result = "NO";
            }
            cout << result << endl;
        }
    }
    return 0;
}
