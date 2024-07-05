#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl endl
// #define nl cout << "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;


int main() {
    int t;
    cin>>t;
    while (t--)
    {
        string s; cin>>s;
        int res = 1;
        // res = (s[0] == '0' ? 0 : 1);
        // res = (s[0] == '?' ? 9 : 1);
        if (s[0] == '0') res = 0;
        if (s[0] == '?') res = 9;
        for (int i = 1; i < s.length(); i++) {
          if (s[i] == '?') res = res * 10;
        }
        cout << res << nl;

    }
    

    return 0;
}