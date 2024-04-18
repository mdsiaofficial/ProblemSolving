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


    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = accumulate(apple.begin(), apple.end(), 0);
        sort(capacity.begin(), capacity.end(), greater<int>());

        int size = 0;
        int c = 0;
        for (int i = 0; i < capacity.size(); i++) {
            size += capacity[i];
            if (sum > size) {
                // size += capacity[i];
                c++;
                // cout << c << " ";
            }
            else {
                c++;
                break;
            }
        }

        return c;
    }


};



int main() {
    Solution s;

    // int t; cin >> t;

    // while(t--){
    //     int n;string s;cin>>n>>s;
    //     vector<char>ch;

    // }

    // cout<<s.isHappy(2);

    // int t;cin >> t;
    // while (t--) {
    //     int n;cin >> n;
    //     checker(n);
    // }

    // vector<int>capacity = { 5,3,7,6,1,8,2,4 };
    // vector<int>apple = { 5,3,7,6,1,8,2,4 };

    // vector<int>capacity = { 4,3,1,5,2 };
    // vector<int>apple = { 1,3,2 };

    vector<int>capacity = { 2,4,2,7 };
    vector<int>apple = { 5,5,5 };

    // int sum = reduce(apple.rbegin(), apple.rend(), 0); // reduce not working
    // int sum = accumulate(apple.begin(), apple.end(), 0);
    // cout << sum << endl;

    // sort(capacity.begin(), capacity.end(), greater<int>());
    // for (int i : capacity) {
    //     cout << i << " ";
    // }

    // cout << s.minimumBoxes(apple, capacity);

    string s; cin >> s;

    return 0;
} 