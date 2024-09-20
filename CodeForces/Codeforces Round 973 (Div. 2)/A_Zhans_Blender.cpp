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
  ll t;
  cin >> t;

  while (t--) {
    ld n, x, y;
    ll s = 0;
    cin >> n;
    cin >> x >> y;

    if (x < y) {
      cout << ceil(n / x) << endl;
    }
    else {
      cout << ceil(n / y) << endl;
    }
    // while (n>0)
    // {
    //   ll ft = min(n, y);
    //   n = n - min(ft, x);
    //   s++;
    // }
    // cout << s << endl;
  }
  return 0;
}                                                                                              