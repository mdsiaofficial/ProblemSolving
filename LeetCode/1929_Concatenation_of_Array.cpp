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

// concatenation of array / vector in cpp :
// arr1 = [ 1,2,3,4,5 ];
// arr2 = [ 1,2,3,4,5 ];

// ans = 
// vector<int> ans(arr1);
// ans.insert(ans.end(), arr2.begin(), arr2.end());


// Solved

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums);

        ans.insert(ans.end(), nums.begin(), nums.end());
        return ans;
    }
};

int main() {
    Solution soln;
    
    vector<int> nums = {1,2,3,4,5};
    vector<int> ans = soln.getConcatenation(nums);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
