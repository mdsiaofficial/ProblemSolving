#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;


class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00 ;
        return vector<double>({kelvin, fahrenheit});
    }
};

int main() {
    Solution solution;
    double celsius = 25.0; // replace with your value
    vector<double> result = solution.convertTemperature(36.50);
    cout << "Kelvin: " << result[0] << ", Fahrenheit: " << result[1] << endl;
    return 0;
}