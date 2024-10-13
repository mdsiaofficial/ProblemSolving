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
  vector<int> smallestRange(vector<vector<int>>& nums) {
    int k = nums.size();
    // Stores the current index of each list
    vector<int> indices(k, 0);
    // To track the smallest range
    vector<int> range = { 0, INT_MAX };

    while (true) {
      int curMin = INT_MAX, curMax = INT_MIN, minListIndex = 0;

      // Find the current minimum and maximum values across the lists
      for (int i = 0; i < k; i++) {
        int currentElement = nums[i][indices[i]];

        // Update the current minimum
        if (currentElement < curMin) {
          curMin = currentElement;
          minListIndex = i;
        }

        // Update the current maximum
        if (currentElement > curMax) {
          curMax = currentElement;
        }
      }

      // Update the range if a smaller one is found
      if (curMax - curMin < range[1] - range[0]) {
        range[0] = curMin;
        range[1] = curMax;
      }

      // Move to the next element in the list that had the minimum value
      if (++indices[minListIndex] == nums[minListIndex].size()) break;
    }

    return range;
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
  return 0;
}