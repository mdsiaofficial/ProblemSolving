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
    int differenceOfSums(int n, int m) {
        long long num1=0;
        long long num2=0;
        for(int i=0; i<=n; i++){
            if(i%m!=0) num1 +=i;
        }

        for(int i=0; i<=n; i++){
            if(i%m==0) num2 +=i;
        }

        return num1-num2;
    }
};

int main() {
    Solution soln;

    cout<<soln.differenceOfSums(10, 3);

    return 0;
}