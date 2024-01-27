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
    double mySqrt(double x) {
        double r = x;
        double precision = 10e-10;
        ll t=20;
        // while (abs(x - r * r) > precision) {
        //     r = (r + x / r) / 2;
        // }
        
        while (t--) {
            r = (r + x / r) / 2;
        }
        
        // return (r);
        return floor(r);
    }
};

int main() {
    Solution soln;

    cout<<soln.mySqrt(8);

    return 0;
}