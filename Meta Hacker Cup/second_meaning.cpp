#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<string> solve(int N, const string &C) {
  vector<string> res;
  for (int i = 1; i < N; i++) {
    res.push_back(string(i, C[0] == '-' ? '.' : '-') + C[0]);
  }
  return res;
}

int main() {
  int T, N;
  string C;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    cin >> N >> C;
    cout << "Case #" << t << ":" << endl;
    vector<string> S = solve(N, C);
    for (auto s : S) {
      cout << s << endl;
    }
  }
  return 0;
}
