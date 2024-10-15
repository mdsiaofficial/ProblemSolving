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

int main()
{
  ll t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;

    ll res1 = -1e9, res2 = -1e9;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (i % 2) res1 = max(res1, arr[i]);
      else res2 = max(res2, arr[i]);
    }
    res1 = res1 + (n / 2);
    res2 = res2 + (n + 1) / 2;
    ll result = max(res1, res2);
    cout << result << endl;
  }


  return 0;
}
