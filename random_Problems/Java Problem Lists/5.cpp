#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;


void primeFactors(int n) {
    while (n % 2 == 0) {
        cout << 2 << " ";
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            cout << i << " ";
            n = n/i;
        }
    }

    if (n > 2)
        cout << n << " ";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Prime factors of " << num << " are: ";
    primeFactors(num);
    return 0;
}