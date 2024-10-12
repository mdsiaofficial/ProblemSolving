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
  int minGroups(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    int size = intervals.size();
    int result = 0;
    priority_queue<int, vector<int>, greater<int>> solnque;
    for (int i = 0; i < size; i++) {
      int ari = intervals[i][0];
      int end = intervals[i][1];

      while (!solnque.empty() && solnque.top() < ari) {
        solnque.pop();
      }
      solnque.push(end);

      result = max(result, (int)solnque.size());
    }
    return result;
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
    // soln.solve();
  }
  return 0;
}