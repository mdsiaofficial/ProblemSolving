#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<string> solve(int N, const string &C) {
  vector<string> P0, P1;
  for (int i = 1; i < N; i++) {
    P0.push_back(string(i, '.') + '-');
    P1.push_back(string(i, '-') + '.');
  }
  auto it = find(P1.begin(), P1.end(), C);
  if (it != P1.end()) {
    P1.erase(it);
    P1.push_back(".");
    return P1;
  }
  return C[0] == '-' ? P0 : P1;
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
