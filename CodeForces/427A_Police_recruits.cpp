#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <numeric>

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

    int t;cin >> t;
    vector<int>ct;

    int s = 0;
    int u = 0;

    while (t--) {
        int n; cin >> n;
        if (n>0) {
            s+=n;
        }
        else {
            if (s < 1) u++;
            else s--;
        }
    }
    
    cout << u << endl;


    return 0;
}