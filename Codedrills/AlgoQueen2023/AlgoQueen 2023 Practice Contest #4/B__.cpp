#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a, c;
    cin >> a >> c;
    if (c % a != 0) {
        cout << "-1" << endl;
        return 0;
    }
    int b = c / a;
    for (int i = 1; i <= b; i++) {
        if (lcm(a, i) == c) {
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}
