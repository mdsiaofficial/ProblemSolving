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


    //  recursive
    // bool isPowerOfTwo(int n) {
    //     if(n <= 0)
    //         return false;
    //     if(n == 1)
    //         return true;
        
    //     return n%2 == 0 && isPowerOfTwo(n/2);
    // }



    // bitset / bit magic
    // bool isPowerOfTwo(int n) {
        
    //     if(n>0 && (n & (n-1)) == 0) return true;
    //     else return false;
    // }


    // gcc compiler builtin function:
    // popcount: it will count the sets in a binary
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        
        return __builtin_popcount(n) == 1;
    }
};

int main() {
    

    return 0;
}