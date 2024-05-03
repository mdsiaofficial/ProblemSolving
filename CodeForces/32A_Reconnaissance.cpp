#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
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
    
    int mySqrt(int x) {
        long long start = 0;
        long long end = x;
        long long key = 0;
        while (start<=end)
        {
            long long mid = start + (end-start)/2;
            cout<<"mid: "<<mid<<endl<<"star: "<<start<<endl<<"end: "<<end<<endl<<endl;

            if(mid*mid<=x){
                key = mid;
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        return key;
    }


    long long Sqrt_Linear_Aprroach(long long x){
        int y=0;
        while (y*y<=x){
            y++;
        }
        return y-1;
        
    }
    // with built in function
    long long Sqrt(long long x){
        
        int y = sqrt(x);
        return y;
    }

    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        
        vector<string> ss;

        // int size = words.size();
        // for (auto x : ss) {
        //     cout << x << endl;
        // }
        // cout << "--" << size << endl;

        for (int j = 0; j < words.size(); j++) {
            int y = 0;
            int u = 0;

            string s = words[j];

            // cout << "---" << s << "---" << endl;

            for (int i = 0; i < s.length(); i++) {
                if (s[i] == separator) {
                    // ss.push_back(s.substr(y, i - y));
                    // y = i + 1;

                    s[i] = ' ';
                }
            }

            // ss.push_back(s.substr(y));
            string xx;
            stringstream bbb(s);
            while (bbb>>xx)
            {
                ss.push_back(xx);
            }
            
        }

        for (auto x : ss) {
            cout << x << endl;
        }
        return ss;
    }
};

int main() {
    Solution soln;

    
    int n,d;cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int c=0;
    sort(arr, arr+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;j++){
            if(abs(arr[i]-arr[i+1])<=d) c++;
        }
    }

    cout<<c*2<<endl;
    return 0;
}