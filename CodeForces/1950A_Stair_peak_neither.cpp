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



int main() {
    
    int t; cin>>t;

    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        if (a < b && b < c) cout << "STAIR\n";
        else if (a<b && b>c) cout << "PEAK\n";
        else cout << "NONE\n";
    }

    return 0;
} 