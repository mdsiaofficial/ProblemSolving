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

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> a[i];
    }
    int maxValue = 0;
    int redCount = 0;
    for (int i = 0; i < n; i += 2)
    {
      maxValue = max(maxValue, a[i]);
      redCount++;
    }

    if (n > 1)
    {
      int tempMaxValue = 0;
      int tempRedCount = 0;
      for (int i = 1; i < n; i += 2)
      {
        tempMaxValue = max(tempMaxValue, a[i]);
        tempRedCount++;
      }
      if (tempMaxValue + tempRedCount > maxValue + redCount)
      {
        maxValue = tempMaxValue;
        redCount = tempRedCount;
      }
    }

    cout << maxValue + redCount << endl;
  }

  return 0;
}
