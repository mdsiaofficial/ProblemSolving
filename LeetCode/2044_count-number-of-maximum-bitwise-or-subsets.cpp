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
    int n;cin >> n;
    vll arr(2 * n);
    ll score = 0;
    for (int i = 0; i < 2 * n; i++) {
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    // Use Greedy Approach pairing opposite elements
        // Start pairing 0/n, shift comparisons 
    for (int i = 0; i < n; ++i) {
      score += abs(arr[n + i] - arr[i]);
    }
    cout << score << nl;
  }
  int countMaxOrSubsets(vector<int>& nums) {
    // Calculate the maximum possible OR value
    int maxOrValue = 0;
    for (int num : nums) {
      maxOrValue |= num;
    }

    int totalSubsets = 1 << nums.size();  // 2^n subsets
    int subsetsWithMaxOr = 0;

    // Iterate through all possible subsets
    for (int subsetMask = 0; subsetMask < totalSubsets; subsetMask++) {
      int currentOrValue = 0;

      // Calculate OR value for the current subset
      for (int i = 0; i < nums.size(); i++) {
        if (((subsetMask >> i) & 1) == 1) {
          currentOrValue |= nums[i];
        }
      }

      // If current subset's OR equals maxOrValue, increment count
      if (currentOrValue == maxOrValue) {
        subsetsWithMaxOr++;
      }
    }

    return subsetsWithMaxOr;
  }
};


int main() {
  // ios_base::sync_with_stdio(false); cin.tie(NULL);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  Solution soln;

  ll t;
  cin >> t;
  for (ll i = 1; i <= t; i++) {
    // cout<<"Case #"<<i<<": ";
    soln.solve();
  }
  // soln.solve();
  // cout << soln.maximumSwap(2736);
  return 0;
}