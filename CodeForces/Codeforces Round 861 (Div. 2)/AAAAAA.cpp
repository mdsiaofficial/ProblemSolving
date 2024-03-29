#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int luckiness(int x, int max_digit, int min_digit) {
    string s = to_string(x);
    for (char c : s) {
        int digit = c - '0';
        if (digit > max_digit) {
            max_digit = digit;
        }
        if (digit < min_digit) {
            min_digit = digit;
        }
    }
    return max_digit - min_digit;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int max_luckiness = -1, best_starship;
        int max_digit = 0, min_digit = 10;
        for (int x = l; x <= r; x++) {
            int x_luckiness = luckiness(x, max_digit, min_digit);
            if (x_luckiness > max_luckiness) {
                max_luckiness = x_luckiness;
                best_starship = x;
            } else if (x_luckiness == max_luckiness) {
                best_starship = max(best_starship, x);
            }
        }
        cout << best_starship << endl;
    }
    return 0;
}
