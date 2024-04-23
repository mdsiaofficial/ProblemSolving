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
    int n;
    cin >> n;
    vector<int>numbers;
    int k;
    for (int i = 0; i < n; i++) {
        cin >> k;
        numbers.push_back(k);
    }
    int m;
    cin >> m;
    int q;
    cin >> q;
    int l, r, x;
    cin >> l >> r >> x;

    l = l - 1; r = r - 1;

    int sum = 0;
    for (int i = l; i <= r; i++) {
        sum += numbers[i]
    }



    
    return 0;
} 