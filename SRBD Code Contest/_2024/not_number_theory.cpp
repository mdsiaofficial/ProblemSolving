#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;



int countSetBits(int n) {
  // int count = 0;
  // while (n) {
  //   count += n & 1;
  //   n >>= 1;
  // }

  bitset <64> binnn(n);
  int count = binnn.count();
  
  return count;
}



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


void solve() {
  string s;
  cin >> s;
  for (char& c : s) {
    string y = to_string(findNumberWithMaxSetBits(9));
    cout << "y: " << y << nl;
    
    if (c == '?') c += y[0];
  }

  int n = stoi(s);
  bitset<64> bin(n);
  // cout << bin.to_string() << nl;
  cout << n << nl;
}



int main() {

  solve();


  return 0;
}