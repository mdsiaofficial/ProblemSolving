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

int main() {
    int num, reversedNum = 0;

    cout << "Enter a 4-digit number: ";
    cin >> num;

    // Reverse the number
    for(int i = 0; i < 4; i++) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    cout << "Reversed Number: " << reversedNum << endl;

    return 0;
}
