#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl endl
#define ll long long int
#define ld long double
#define ull unsigned long long
#define vll vector<ll>
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))


using namespace std;

class Solution {
public:
  void solve(int n) {
    int weeks[7];
    int total = 0;
    int day = 0;
    for (int i = 0; i < 7; i++) {
      cin >> weeks[i];

    }
    while (total < n) {
      total += weeks[day];
      if (total >= n) {
        cout << (day + 1) << endl; // Output the 1-based index of the day
        return;
      }
      day = (day + 1) % 7; // Move to the next day, reset to 0 if reaching Sunday
    }

    cout << day << nl;
  }
};
int main() {
  // ios_base::sync_with_stdio(false); cin.tie(NULL);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  Solution soln;

  ll t;
  cin >> t;
  // for (ll i = 1; i <= t; i++) {
  //   // cout<<"Case #"<<i<<": ";
  //   soln.solve();
  // }
  soln.solve(t);

  return 0;
}