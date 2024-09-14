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
    bool containsDuplicate(vector<int>& nums) {
        set<int>dup(nums.begin(), nums.end());
        if(nums.size() == dup.size()) return false;
        else return true;
    }
};


int main() {


    return 0;
} 