#include <bitset>
#include <iostream>
#include <vector>
using namespace std;

const int BITS = 8; // ceil(log2(100)) + 1;

vector<string> solve(int N, string C1) {
  vector<string> res;
  for (int i = 0; i < (1 << BITS) && (int)res.size() < N - 1; i++) {
    string s = bitset<BITS>(i).to_string('.', '-');
    if (C1.rfind(s, 0) != 0 && s.rfind(C1, 0) != 0) {
      res.push_back(s);  // Add s if C1 is not a prefix of s and vice versa.
    }
  }
  return res;
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
