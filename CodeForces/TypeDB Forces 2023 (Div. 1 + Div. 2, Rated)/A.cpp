#include <bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;


int main(){
    ll t;
    cin>>t;
    for(ll i=0; i<t; i++){
        ll n;
        cin>>n;
        ll x=1;
        ll y=1;
        for(ll j=x; j<=n; j++){
            for(ll k=y; j<=n; k++){
                ll a = pow(j,k)*k;
                ll b = pow(k,j)*j;

                if((a+b)==n){
                    x=j;
                    y=k;
                    break;

                    //cout<<j<<" "<<k<<endl;
                }else{
                    //cout<<"-1"<<endl;
                }
            }
        }
        if((x+y)==n){
            cout<<x<<" "<<y<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }

    return 0;
}