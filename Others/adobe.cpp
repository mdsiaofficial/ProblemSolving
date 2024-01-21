#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = int(i); i < int(n); i++)

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;


int main() {

    ld x = 841.8898;
    ld y = 595.2756;

    ld r = 1.41428575;

    for(int i=0; i<200; i++){
        x = x+1;
        y = y+1;

        ld newR = x/y;

        cout<<fs(4)<<x<<" / "<<y<<" = "<<fs(8)<<newR<<nl;
    }

    return 0;
}
