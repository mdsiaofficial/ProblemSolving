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
  int smallestChair(vector<vector<int>>& times, int targetFriend) {
    vector<pair<int, pair<int, int>>> frndsoption;
    int size = times.size();

    for (int i = 0; i < size; i++) {
      pair<int, pair<int, int>> temp = {times[i][0], {times[i][1], i}};
      frndsoption.push_back(temp);
    }
    sort(frndsoption.begin(), frndsoption.end());
    vector<int> ch(size, -1);
    for (int i = 0; i < size; i++) {
      int arrival_time = frndsoption[i].first;
      int leave_time = frndsoption[i].second.first;
      int frnd = frndsoption[i].second.second;
      for (int j = 0; j < size; j++) {
        if (ch[j] <= arrival_time) {
          ch[j] = leave_time;
          if (frnd == targetFriend) {
            return j;
          }
          break;
        }
      }
    }
    return 0;
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
  return 0;
}