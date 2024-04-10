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
};

int main() {
    Solution soln;

    cout<<soln.mySqrt(925);
    // long x = 2.23;
    // cout<<x;
    


    return 0;
}