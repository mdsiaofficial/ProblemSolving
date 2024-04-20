#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <numeric>

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

    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        for(auto x: nums){
            mp[x]++;
        }
        for (auto z : mp) {
            
            if (z.second == 1){
                return z.first;
            }
        }
        return -1;

    }
};



int main() {
    Solution s;
    vector<int>n = { 4,1,2,3,3,1,2,5,5 };
    // s.singleNumber(n);

    unordered_map<int,int> mp;
    for(auto x: n){
        mp[x]++;
    }


    for (auto z : mp) {
        cout << z.first << "-" << z.second << endl;
    }
    
    
    return 0;
} 