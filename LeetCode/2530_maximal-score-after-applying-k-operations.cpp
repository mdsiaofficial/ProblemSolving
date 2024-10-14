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
  void solve() {
    int n, x;cin >> n >> x;
    cout << n - x << nl;
  }
  long long maxKelements(vector<int>& nums, int k) {
    priority_queue<int> lists (nums.begin(), nums.end());
    long long sum = 0;
    for (long long i = 0; i < k; i++) {
      long long temp = lists.top();
      // cout<<lists.top()<<endl;
      sum += temp;
      lists.pop();
      lists.push(ceil(temp / 3.0));
    }
    return sum;
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
  // soln.solve();

  vector<int>vr =  {1,10,3,3,3};
  int k=3;
  cout<<soln.maxKelements(vr, k);
  return 0;
}