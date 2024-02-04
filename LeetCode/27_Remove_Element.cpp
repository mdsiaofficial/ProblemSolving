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
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[count++] = nums[i];
            }
        }
        return count;
    }
    
    void RremoveElement(vector<int>& nums, int val) {
        auto it = remove(nums.begin(), nums.end(), val);
        nums.erase(it, nums.end());
        cout << "Modified vector: ";
        for (int num : nums) {
            cout << num << " ";
        }
        cout << "\n";
    }
};

int main() {
    Solution soln;
    vector<int> n = {1,2,3,4,2,3,4,5,2,3,2,3,3};
    soln.RremoveElement(n, 2);

    return 0;
}