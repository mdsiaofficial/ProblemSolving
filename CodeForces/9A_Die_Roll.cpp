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

void solve() {
    int y,w;
    cin>>y>>w;

    int m=max(y,w);
    int v=(6-m+1);

    string s;
    switch (v) {
        case 1:
            s="1/6";
            break;
        case 2:
            s="1/3";
            break;
        case 3:
            s="1/2";
            break;
        case 4:
            s="2/3";
            break;

        case 5:
            s="5/6";
            break;
        case 6:
            s="1/1";
            break;
    }
    cout<<s;
}

int main() {

    solve();

    return 0;
}
