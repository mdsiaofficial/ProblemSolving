#include <iostream>
#include <queue>
#include <set>
using namespace std;

set<string> solve(int N, string C1) {
  set<string> leaves;
  queue<string> q;
  for (q.push(""); !q.empty(); q.pop()) {
    string curr = q.front();
    leaves.erase(curr);
    for (string s : {curr + ".", curr + "-"}) {
      q.push(s);
      if (C1.rfind(s, 0) != 0 && s.rfind(C1, 0) != 0) {
        leaves.insert(s);
        if (leaves.size() == N - 1) {
          return leaves;
        }
      }
    }
  }
  return {};
}

int main() {
  int T, N;
  string C1;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    cin >> N >> C1;
    cout << "Case #" << t << ":" << endl;
    auto S = solve(N, C1);
    for (auto s : S) {
      cout << s << endl;
    }
  }
  return 0;
}
