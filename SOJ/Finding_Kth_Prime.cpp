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
#define ull unsigned long long

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;
bool p[90000001];
int n=90000000;
vector<int>vp;

void sieve(){
    for(ll i=2; i<=sqrt(n); i++){
        if(p[i]==false){
            for(ll j=i+i; j<=n; j+=i){
                p[j]=true;
            }
        }
    }
    for(ll i=2; i<=n; i++){
        if(p[i]==false){
            pp.push_back(i);
        }
    }
}

int main(){
    sieve();
    ll t;
    cin>>t;
    for(ll i=0; i<t; i++){
        ll x;
        cin>>x;
        cout<<pp[x-1]<<endl;
    }

    return 0;
}
