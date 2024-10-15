#include <bits/stdc++.h>
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
#define el endl
using namespace std;

class Solution {
public:
  long long minimumSteps(string s) {
    int n = s.size();
    vector<int>rightside, leftside;
    for (int i = 0;i < n;i++)
    {
      if (s[i] == '0'){
        rightside.push_back(i);
      }else{
        leftside.push_back(i);
      }  
    }
    int size_right = rightside.size(), size_left = leftside.size();
    int i = 0, j = size_right - 1;
    long long ans = 0;
    while (i < size_left && j >= 0)
    {
      if (leftside[i] > rightside[j]){
        break;
      }
      ans = ans + abs(leftside[i] - rightside[j]);
      i++;
      j--;
    }
    return ans;
  }
};
int main() {
  cout << "Done";
  return 0;
}