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

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
// a b c d e f g h i j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z


// solved //
class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        for(int i=0; i<nums.size()-1; i++){
            if(i%2==0) arr1.push_back(nums[i]);
            else arr2.push_back(nums[i]);
        }

        int s1 = arr1.size();
        int s2 = arr2.size();
        // cout<<arr1[s1-1]<<" "<<arr2[s2-1]<<" "<<nums[nums.size()-1]<<endl;

        if(arr1[s1-1] > arr2[s2-1]) arr1.push_back(nums[nums.size()-1]);
        else arr2.push_back(nums[nums.size()-1]);


        vector<int>result(nums.size());// initialize result vector without defining its size
        // we define the size of result vector when we copy the elements from arr1 and arr2 to result
        // so we don't need to define its size here in bracket
        std::copy(arr1.begin(),arr1.end(),result.begin());
        std::copy(arr2.begin(),arr2.end(),result.begin()+arr1.size());
        return result;
    }
};

int main() {
    
    vector<int> nums = {5,4,3,8};
    
    Solution soln;
    vector<int> result = soln.resultArray(nums);

    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }

    return 0;
}