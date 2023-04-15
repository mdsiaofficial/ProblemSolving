#include <iostream>

using namespace std;

// Function to find the gcd of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, c;
    cin >> a >> c;

    // Find the gcd of a and c
    int g = gcd(a, c);

    // If c is not a multiple of a, there's no solution
    if (c % a != 0) {
        cout << "-1" << endl;
        return 0;
    }

    // Divide c by the gcd to get the lcm of a and b
    int lcm = (a * c) / g;

    // b = lcm(a,b) / a
    int b = lcm / a;

    cout << b << endl;

    return 0;
}
