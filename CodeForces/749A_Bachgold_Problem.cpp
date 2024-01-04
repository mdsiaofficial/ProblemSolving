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

// unsolved
int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    if(t%2==0){
        t=t/2;
        cout<<t<<nl;
        for(int i=1; i<=t; i++){
            cout<<"2 ";
        }
        cout<<nl;
    }else{
        
        t=t-3;
        t = t/2;
        cout<<t+1<<nl;
        for(int i=1; i<=t; i++){
            cout<<"2 ";
        }
        cout<<"3"<<nl;
    }

    return 0;
}

// 63-3 = 60 

/* 

    1- Even or Odd
    2- if odd :
        number - 3 =  result
            result / 2 = res and count++

    3 - if even:
        number /2 = res and count++

 */