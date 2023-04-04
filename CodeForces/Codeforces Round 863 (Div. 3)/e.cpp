#include <iostream>
#include <string>

using namespace std;

long long limit = 1000000000000LL;

int count_live_sequence(long long prefix) {
    int count = 0;
    for (int digit = 0; digit < 10; digit++) {
        if (digit == 4) {
            continue;
        }
        if (prefix == 0 && digit == 0) {
            continue;
        }
        if (prefix * 10 + digit >= limit) {
            break;
        }
        count += 1;
        count += count_live_sequence(prefix * 10 + digit);
    }
    return count;
}

long long find_live_number(long long k) {
    long long n = 0;
    long long prefix = 0;
    while (true) {
        for (int digit = 0; digit < 10; digit++) {
            if (digit == 4) {
                continue;
            }
            if (prefix == 0 && digit == 0) {
                continue;
            }
            int count = count_live_sequence(prefix * 10 + digit);
            if (k <= count) {
                n = n * 10 + digit;
                prefix = prefix * 10 + digit;
                break;
            }
            k -= count;
        }
        if (k == 0) {
            break;
        }
    }
    return n;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long k;
        cin >> k;
        cout << find_live_number(k) << endl;
    }
    return 0;
}
