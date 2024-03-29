#include <iostream>
#include <algorithm>
#include <chrono>
#include <bits/stdc++.h>
using namespace std;

int luckiness(int x) {
    int max_digit = 0, min_digit = 10;
    while (x) {
        int digit = x % 10;
        x /= 10;
        max_digit = max(max_digit, digit);
        min_digit = min(min_digit, digit);
    }
    return max_digit - min_digit;
}
/* 
int time_stamp(){
    auto now = std::chrono::system_clock::now();
    auto now_ms = std::chrono::time_point_cast<std::chrono::milliseconds>(now);
    auto value = now_ms.time_since_epoch().count();
    //std::cout << "Current timestamp: " << value << std::endl;
    return value;
}
 */

int main() {
/* 
    long long t1 = time_stamp();
     */
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
            } else if (x_luckiness == max_luckiness) {
                best_starship = max(best_starship, x);
            }
        }
        cout << best_starship << endl;
    }

/* 
    long long t2 = time_stamp();
    cout<<t1<<endl<<t2<<endl<<(t2-t1)<<endl;
     */
    return 0;
}
