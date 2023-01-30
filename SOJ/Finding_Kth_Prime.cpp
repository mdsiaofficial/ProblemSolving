#include <bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;
bool p[90000001];
int n=90000000;
vector<int>v;

void sieve(){
    
    for(int i=2; i<=sqrt(n); i++){
        if(p[i]==false){
            for(int j=i+i; j<=n; j+=i){
                p[j]=true;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(p[i]==0){
            v.push_back(i);
        }
    }
    
    
}

int main(){
    sieve();
    ll t;
    cin>>t;
    for(int i=0; i<t; i++){
        int x;
        cin>>x;
        cout<<v[n-1]<<endl;;
    }
    return 0;
}