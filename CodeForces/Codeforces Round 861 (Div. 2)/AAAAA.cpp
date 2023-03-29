#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int luckiness(int x) {
    string s = to_string(x);
    int max_digit = 0, min_digit = 10;
    for (char c : s) {
        int digit = c - '0';
        max_digit = max(max_digit, digit);
        min_digit = min(min_digit, digit);
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
        for (int x = l; x <= r; x++) {
            int x_luckiness = luckiness(x);
            if (x_luckiness > max_luckiness) {
                max_luckiness = x_luckiness;
                best_starship = x;
            }else if (x_luckiness == max_luckiness) {
                best_starship = max(best_starship, x);
            }
        }
        cout << best_starship << endl;
    }
    return 0;
}
