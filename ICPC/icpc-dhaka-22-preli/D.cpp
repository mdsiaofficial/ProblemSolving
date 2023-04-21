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
    for(int i=1; i<=t; i++)
    {
        int a,b,c,k;
        cin>>a>>b>>c>>k;

        if((a+b+c)%3==0){
            cout<<"Case "<<i<<": "<<"Peaceful"<<endl;
        }else{
            cout<<"Case "<<i<<": "<<"Fight"<<endl;
        }
        
        
    }
    return 0;
}