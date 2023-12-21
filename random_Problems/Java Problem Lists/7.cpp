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


using namespace std;

int main() {
    int num, positive = 0, negative = 0, odd = 0, even = 0, zeros = 0;

    cout << "Enter 20 integers: " << endl;
    for(int i = 0; i < 20; i++) {
        cin >> num;

        if(num > 0) {
            positive++;
        } else if(num < 0) {
            negative++;
        } else {
            zeros++;
        }

        if(num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "Number of positive numbers: " << positive << endl;
    cout << "Number of negative numbers: " << negative << endl;
    cout << "Number of odd numbers: " << odd << endl;
    cout << "Number of even numbers: " << even << endl;
    cout << "Number of 0s: " << zeros << endl;

    return 0;
}
