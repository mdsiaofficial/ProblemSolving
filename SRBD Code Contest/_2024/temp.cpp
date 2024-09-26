#include <bits/stdc++.h>

using namespace std;

int findNumberWithMaxSetBits(int limit) {
  int maxSetBits = 0;
  int maxNumber = 0;

  for (int i = 1; i <= limit; ++i) {
    int currentSetBits = countSetBits(i);

    if (currentSetBits > maxSetBits) {
      maxSetBits = currentSetBits;
      maxNumber = i;
    }
  }
  return maxNumber;
}


int main() {

  // 5 => 101
  // 206 => 

  bitset <64> binnn(58623);
  cout<<binnn.count()<<endl;
  string s = "??1";
  // cin >> s;
  // for (int i = 0; i <= 9; i++) {

  // }

  for (char& c : temp) {
    if (c == '?') {
      c = '0' + ((mask >> bitIndex) & 1) * 9; // Try '0' and '9'
      bitIndex++;
    }
  }
  return 0;
}
