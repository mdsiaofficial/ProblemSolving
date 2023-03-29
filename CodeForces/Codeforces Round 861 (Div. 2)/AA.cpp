#include <iostream>
using namespace std;

int get_luckiness(int x) {
    int smallest = 9, largest = 0;
    while (x > 0) {
        int digit = x % 10;
        smallest = min(smallest, digit);
        largest = max(largest, digit);
        x /= 10;
    }
    return largest - smallest;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int max_luckiness = 0, luckiest_number = 0;
        for (int x = l; x <= r; x++) {
            int luckiness = get_luckiness(x);
            if (luckiness > max_luckiness) {
                max_luckiness = luckiness;
                luckiest_number = x;
            }
        }
        cout << luckiest_number << endl;
    }
    return 0;
}
