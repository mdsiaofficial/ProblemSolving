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
    int num, count = 0;
    long long product = 1;
    double sum = 0.0;

    while (true) {
        cout << "Enter an integer (press 'q' to quit): ";
        if (!(cin >> num)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
        sum += num;
        product *= num;
        count++;
    }

    if (count > 0) {
        cout << "Average: " << sum / count << endl;
        cout << "Product: " << product << endl;
    } else {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}