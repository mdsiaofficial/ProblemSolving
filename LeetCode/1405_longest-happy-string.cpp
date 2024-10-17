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
  string longestDiverseString(int a, int b, int c) {
    string result;
    priority_queue<pair<int, char>> max_Heap;

    if (a > 0) max_Heap.push({ a, 'a' });
    if (b > 0) max_Heap.push({ b, 'b' });
    if (c > 0) max_Heap.push({ c, 'c' });

    while (!max_Heap.empty()) {
      auto [count1, char1] = max_Heap.top();
      max_Heap.pop();

      if (result.size() > 1 && result.back() == char1 && result[result.size() - 2] == char1) {
        if (max_Heap.empty()) break;

        auto [count2, char2] = max_Heap.top();
        max_Heap.pop();
        result += char2;
        if (--count2 > 0) max_Heap.push({ count2, char2 });

        max_Heap.push({ count1, char1 });
      }
      else {
        result += char1;
        if (--count1 > 0) max_Heap.push({ count1, char1 });
      }
    }
    return result;
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