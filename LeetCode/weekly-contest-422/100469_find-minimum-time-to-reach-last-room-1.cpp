#include<bits/stdc++.h>
#include <stdlib.h>

#define nl endl
#define el cout<<"\n"
#define ll long long
#define ld long double
#define ull unsigned long long

#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define PLL pair<ll,ll>
#define pii pair<int,int>
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define scn(n) scanf("%d",&n)
#define scnll(n) scanf("%lld",&n)

#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define no cout<<"no\n"

#define mod 1000000007LL
#define mod1 1000000007LL
#define mod2 1000000009LL
#define inf 1000000000000000LL
#define N 200000
#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define mod9 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))


#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

// * -----------------------------------------------------------
// * run program on cli
// *  -----------------------------------------------------------
//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe


class Solution {
public:
  int minTimeToReach(vector<vector<int>>& moveTime) {
    int n = moveTime.size();
    int m = moveTime[0].size();

    // Priority queue to store (time, row, col) with minimum time at the top
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;
    pq.emplace(0, 0, 0); // Start at (0, 0) with initial time 0

    // 2D array to store the minimum time to reach each cell
    vector<vector<int>> minTime(n, vector<int>(m, INT_MAX));
    minTime[0][0] = 0;

    // Directions for moving up, down, left, and right
    const int directions[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

    while (!pq.empty()) {
      auto [currentTime, x, y] = pq.top();
      pq.pop();

      // If we reached the target cell (n-1, m-1), return the time
      if (x == n - 1 && y == m - 1) return currentTime;

      // Explore adjacent cells
      for (const auto& dir : directions) {
        int newX = x + dir[0];
        int newY = y + dir[1];

        // Check bounds
        if (newX >= 0 && newX < n && newY >= 0 && newY < m) {
          // Calculate the minimum time required to reach the next cell
          int nextTime = max(moveTime[newX][newY], currentTime + 1);

          // Ensure the nextTime respects the parity constraint
          if ((nextTime - currentTime) % 2 == 0) {
            nextTime++;
          }

          // Only proceed if a shorter path is found
          if (nextTime < minTime[newX][newY]) {
            minTime[newX][newY] = nextTime;
            pq.emplace(nextTime, newX, newY);
          }
        }
      }
    }

    // If target cell was unreachable, return -1 (edge case, though constraints ensure it's reachable)
    return -1;
  }
};


int main() {
  // ios_base::sync_with_stdio(false); cin.tie(NULL);
  //* For External input/output
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  Solution solution;




  ll t;
  // cin >> t;

  //* Test case loop
  for (ll i = 1; i <= t; i++) {
    // cout<<"Case #"<<i<<": ";
    // soln.solve();
  }

  //* Single test
  // soln.solve();
  vector<vector<int>> moveTime1 = { {0, 4}, {4, 4} };
  vector<vector<int>> moveTime2 = { {0, 0, 0}, {0, 0, 0} };
  vector<vector<int>> moveTime3 = { {0, 1}, {1, 2} };

  cout << "Minimum time for Example 1: " << solution.minTimeToReach(moveTime1) << endl;
  cout << "Minimum time for Example 2: " << solution.minTimeToReach(moveTime2) << endl;
  cout << "Minimum time for Example 3: " << solution.minTimeToReach(moveTime3) << endl;
  return 0;
}