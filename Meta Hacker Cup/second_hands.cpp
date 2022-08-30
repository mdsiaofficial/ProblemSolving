#include <iostream>
using namespace std;

const int LIM = 105;

int N, K;
int S[LIM];

string solve() {
  if (N > 2*K) {
    return "NO";
  }
  int cnt[LIM+1] = {0};
  for (int i = 0; i < N; i++) {
    if (++cnt[S[i]] == 3) {
      return "NO";
    }
  }
  return "YES";
}

int main() {
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
      cin >> S[i];
    }
    cout << "Case #" << t << ": " << solve() << endl;
  }
  return 0;
}
