#include <cmath>
#include <iostream>
#include <unordered_map>
using namespace std;

const int LIM = 200000;

int N, M, Q;
unordered_map<int, int> adj[LIM];

// big_ind_flow[u][v] = the total flow from u to v through length-2 paths
// if u is a "big" node with degree > sqrt(M), otherwise big_ind_flow[u] = {}.
unordered_map<int, long long> big_ind_flow[LIM];

inline int degree(int i) {
  return adj[i].size();
}

inline bool is_big(int i) {
  return degree(i) > (int)sqrt(M);
}

void solve() {
  for (int i = 0; i < LIM; i++) {
    adj[i].clear();
    big_ind_flow[i].clear();
  }
  cin >> N >> M >> Q;
  for (int i = 0, a, b, c; i < M; i++) {
    cin >> a >> b >> c;
    a--, b--;
    adj[a][b] = adj[b][a] = c;
  }
  // O(M^1.5) - precompute length-2 max flows for "big" nodes (deg > sqrt(M)).
  for (int u = 0; u < N; u++) {
    if (is_big(u)) {
      for (auto const &[mid, c1] : adj[u]) {
        for (auto const &[v, c2] : adj[mid]) {
          if (u != v) {
            big_ind_flow[u][v] += min(c1, c2);
          }
        }
      }
    }
  }
  // Answer queries.
  for (int i = 0, x, y; i < Q; i++) {
    cin >> x >> y;
    x--, y--;
    if (degree(x) < degree(y)) {
      swap(x, y);  // Always process queries from bigger node.
    }
    long long ans = 0;
    if (adj[x].count(y)) {
      ans += 2*adj[x][y];  // Fly direct x -> y.
    }
    if (is_big(x)) {
      ans += big_ind_flow[x][y];
    } else {
      for (auto const &[mid, c1] : adj[x]) {  // O(sqrt(M))
        if (adj[mid].count(y)) {
          ans += min(c1, adj[mid][y]);  // Fly indirect x -> mid -> y.
        }
      }
    }
    cout << " " << ans;
  }
}

int main() {
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    cout << "Case #" << t << ":";
    solve();
    cout << endl;
  }
  return 0;
}
