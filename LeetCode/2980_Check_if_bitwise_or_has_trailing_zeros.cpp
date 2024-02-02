#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <bitset>
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed << setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

class Solution
{
public:
    bool hasTrailingZeros(vector<int> &nums)
    {
        int c = 0;

        for (auto n : nums)
        {
            if(n%2==0) c++;
        }

        if(c>=2)return true;
        else return false;
    }
};

int main()
{
    Solution soln;

    // cout<<soln.hasTrailingZeros(8);

    return 0;
}