#include <iostream>
#include <unordered_map>
using namespace std;

const int LIM = 200005;

int N, M, Q;
unordered_map<int, int> adj[LIM];

void solve() {
  for (int i = 0; i < LIM; i++) {
    adj[i].clear();
  }
  cin >> N >> M >> Q;
  for (int i = 0, a, b, c; i < M; i++) {
    cin >> a >> b >> c;
    a--, b--;
    adj[a][b] = adj[b][a] = c;
  }
  unordered_map<long long, long long> memo;
  // Answer queries.
  for (int i = 0, x, y; i < Q; i++) {
    cin >> x >> y;
    x--, y--;
    if (adj[x].size() > adj[y].size()) {
      swap(x, y);
    }
    long long id = (long long)x*N + y;
    auto it = memo.find(id);
    if (it != memo.end()) {
      cout << " " << it->second;
      continue;
    }
    long long ans = 0;
    if (adj[x].count(y)) {
      ans += 2*adj[x][y];  // Fly direct x -> y.
    }
    for (auto const &[mid, c1] : adj[x]) {
      if (adj[mid].count(y)) {
        ans += min(c1, adj[mid][y]);  // Fly indirect x -> mid -> y.
      }
    }
    memo[id] = ans;
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
