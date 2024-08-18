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

class Solution {
public:
  int nthUglyNumber(int n) {
    vector <int> primeNums = { 2,3,5 };
    vector <int> index = { 0, 0, 0 };
    vector <int> ugly(1, 1);

    for (int i = 1; i < n; i++) {
      vector <int> newUgly = {
          ugly[index[0]] * primeNums[0],
          ugly[index[1]] * primeNums[1],
          ugly[index[2]] * primeNums[2],

      };
      
      int min = *min_element(newUgly.begin(), newUgly.end());
      ugly.push_back(min);

      for (int j = 0; j < 3; j++) {
        if (newUgly[j] == min) index[j]++;
      }
    }
    return ugly[n - 1];
  }
};

int main() {


  return 0;
}