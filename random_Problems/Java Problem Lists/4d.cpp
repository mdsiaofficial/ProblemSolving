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
    int sum = 0, product = 1, count = 0;
    string input;

    while (true) {
        cout << "Enter an integer (or 'q' to quit): ";
        cin >> input;

        if (input == "q") {
            break;
        }

        int num = stoi(input);
        sum += num;
        product *= num;
        count++;
    }

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Average: " << average << endl;
        cout << "Product: " << product << endl;
    } else {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}