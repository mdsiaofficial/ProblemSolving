#include <iostream>
using namespace std;

const int LIM = 105;

int R, C;
char G[LIM][LIM];

void solve() {
  bool empty = true;
  cin >> R >> C;
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cin >> G[i][j];
      empty = empty && G[i][j] == '.';
    }
  }
  if (!empty && (R < 2 || C < 2)) {
    cout << "Impossible" << endl;
    return;
  }
  cout << "Possible" << endl;
  for (int i = 0; i < R; i++) {
    cout << string(C, empty ? '.' : '^') << endl;
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
