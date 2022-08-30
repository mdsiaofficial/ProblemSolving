#include <iostream>
#include <queue>
#include <utility>
using namespace std;

const int LIM = 3005;

int R, C;
char G[LIM][LIM];
bool bad[LIM][LIM];

inline bool good(int i, int j) {
  return i >= 0 && i < R && j >= 0 && j < C && G[i][j] != '#' && !bad[i][j];
}

inline int num_good_adj(int i, int j) {
  return good(i - 1, j) + good(i + 1, j) + good(i, j - 1) + good(i, j + 1);
}

void solve() {
  bool empty = true;
  cin >> R >> C;
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cin >> G[i][j];
      empty = empty && G[i][j] != '^';
    }
  }
  if (!empty && (R < 2 || C < 2)) {
    cout << "Impossible" << endl;
    return;
  }
  queue<pair<int, int>> q;
  memset(bad, false, sizeof bad);
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      if (num_good_adj(i, j) < 2) {
        q.push({i, j});
      }
    }
  }
  while (!q.empty()) {
    auto [i, j] = q.front();
    q.pop();
    if (good(i, j) && num_good_adj(i, j) < 2) {
      if (G[i][j] == '^') {
        cout << "Impossible" << endl;
        return;
      }
      bad[i][j] = true;
      q.push({i - 1, j});
      q.push({i + 1, j});
      q.push({i, j - 1});
      q.push({i, j + 1});
    }
  }
  cout << "Possible" << endl;
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      if (G[i][j] == '.' && !bad[i][j]) {
        cout << '^';
      } else {
        cout << G[i][j];
      }
    }
    cout << endl;
  }
}

int main() {
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    cout << "Case #" << t << ": ";
    solve();
  }
  return 0;
}
