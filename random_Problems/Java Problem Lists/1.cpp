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
    int quantity;
    double total_cost;
    cout << "Enter the quantity: ";
    cin >> quantity;

    total_cost = quantity * 100;

    if(total_cost > 1000) {
        total_cost = total_cost - (total_cost * 0.1);
    }

    cout << "The total cost is: " << total_cost << endl;

    return 0;
}