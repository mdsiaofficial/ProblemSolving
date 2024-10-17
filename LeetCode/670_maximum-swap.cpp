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
  int maximumSwap(int num) {
    string strnum = to_string(num);
    string numcpy = strnum;
    // cout<<numcpy<<endl;

    sort(strnum.rbegin(), strnum.rend());
    // cout<<"strnum="<<strnum<<endl;
    // cout<<"numcpy="<<numcpy<<endl;
    for (int i = 0; i < strnum.size(); i++) {
      if (strnum[i] != numcpy[i]) {
        int index = -1;
        for (int j = i + 1; j < numcpy.size(); j++) {
          // cout<<i<<" "<<j<<" : "<<numcpy[j]<<" "<<strnum[i]<<endl;
          if (numcpy[j] == strnum[i]) {
            index = j;
          }
        }
        // cout<<index<<" "<<i<<endl;
        swap(numcpy[index], numcpy[i]);
        break;
      }
    }

    return stoi(numcpy);
  }
};


int main() {
  // ios_base::sync_with_stdio(false); cin.tie(NULL);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  Solution soln;

  // ll t;
  // cin >> t;
  // for (ll i = 1; i <= t; i++) {
  //   // cout<<"Case #"<<i<<": ";
  //   soln.solve();
  // }
  // // soln.solve();
  cout << soln.maximumSwap(2736);
  return 0;
}