#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // If the initial number is already divisible by 3, Vova wins.
        if (n % 3 == 0) {
            cout << "Second" << endl;
        } else {
            // If the number is not divisible by 3, Vanya wins by making it divisible by 3.
            // Vova will then always subtract 1 or add 1 to maintain divisibility by 3.
            cout << "First" << endl;
        }
    }

    return 0;
}
// 6
// 1
// 3
// 5
// 100
// 999
// 1000

