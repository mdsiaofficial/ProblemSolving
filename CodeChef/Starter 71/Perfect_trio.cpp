#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        ((a==(b+c))||(b==(a+c))||(c==(a+b))) ? cout<<"Yes"<<endl : cout<<"No"<<endl;

    }

    return 0;
}