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




// Solved

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();

        for(int i=size-1; i>=0; i--){

            if(i == size-1) digits[i]++;
            
            if(digits[i]<10){
                return digits;
            }
            digits[i] = 0;
        }

        // This line of code is executed when all the digits in the vector are 9. 
        // It adds a 1 at the beginning of the vector, effectively increasing the number's magnitude by one place value.
        // For example, if the input vector represents the number 999, this operation changes it to 1000.
        digits.insert(digits.begin(), 1);
        // After inserting the 1 at the beginning, the updated vector is returned as the final result.
        return digits;
    }
};

int main() {
    Solution soln;
    
    vector<int> nums = {1,2,3,4,5};
    vector<int> ans = soln.plusOne(nums);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
