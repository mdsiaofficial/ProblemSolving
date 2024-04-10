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


int main() {

    long long t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        long double x = (double)n/3;
        long long xx = x;
        // cout<<x<<" "<<xx;

        // if(xx*3 == n){
        //     cout<<xx<<" "<<xx<<endl;
        // }else if(x >=){
        //     cout<<x<<" "<<x+1<<endl;
        // }

        if(n%3==0){
            
            cout<<xx<<" "<<xx<<endl;
        }else if(n%3==1){
            
            cout<<xx+1<<" "<<xx<<endl;
        }else if(n%3==2){
            
            cout<<xx<<" "<<xx+1<<endl;
        }
    }
    
    return 0;
}
