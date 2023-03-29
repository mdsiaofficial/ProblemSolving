#include <iostream>
#include <string>

using namespace std;

int luckiness(int num) {
    string str = to_string(num);
    int min_digit = 9, max_digit = 0;
    for (char c : str) {
        int digit = c - '0';
        min_digit = min(min_digit, digit);
        max_digit = max(max_digit, digit);
    }
    return max_digit - min_digit;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int max_luckiness = 0, luckiest_num = l;
        for (int num = l; num <= r; num++) {
            int curr_luckiness = luckiness(num);
            if (curr_luckiness > max_luckiness) {
                max_luckiness = curr_luckiness;
                luckiest_num = num;
            }
        }
        cout << luckiest_num << endl;
    }
    return 0;
}
