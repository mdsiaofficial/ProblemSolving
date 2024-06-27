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
  int findCenter(vector<vector<int>>& edges) {
    map<int, int>count;

    // flat array and count them
    for (auto arr : edges) {
      for (int el : arr) {
        count[el]++;
      }
    }
    int highestNode = 0;
    int highestValue = 0;
    for (auto pair : count) {
      // cout << "Element: " << pair.first << " occurs: " << pair.second << " times" << endl;
      if (pair.second > highestValue) {
        highestValue = pair.second;highestNode = pair.first;
      }
    }
    // cout << highestNode << endl;
    return highestNode;
  }
};

int main() {
  Solution soln;
  vector<vector<int>> arrayOfArrays = { {1,2}, {5,1}, {1,3}, {1,4} };

  cout << soln.findCenter(arrayOfArrays) << endl;

  return 0;
}