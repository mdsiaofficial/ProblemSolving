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
    bool isHappy(int n) {
        // if(n==1) return true;
        unsigned long long temp = n;

        while (temp!=1 && temp!=4)
        {

            unsigned long long sum = 0;

            while (temp > 0) {
                sum += (temp % 10) * (temp % 10);
                temp = (temp / 10);
                cout << "sum: " << sum << endl;
            }

            temp = sum;

        }
        
        return (temp == 1);
    }
};


int main() {
    Solution s;
    
    // int t; cin >> t;

    // while(t--){
    //     int n;string s;cin>>n>>s;
    //     vector<char>ch;

    // }

    cout<<s.isHappy(2);

    return 0;
} 