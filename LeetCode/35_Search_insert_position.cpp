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

    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();
        int mid;
        if (target > nums[high - 1]) return high;

        while (low <= high)
        {
            mid = low + (high - low) / 2;

            if (nums[mid] == target) return mid;
            if (nums[mid] < target) low = mid + 1;
            if (nums[mid] > target) high = mid - 1;
        }
        return low;
    }
};

int main() {
    

    return 0;
}