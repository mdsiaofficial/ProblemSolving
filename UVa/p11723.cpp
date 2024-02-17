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

void solve(int rr, int nn){
    int r, n, s=0, ns=0, result;
    int c =1;
    while(cin>>r>>n){
        while(result<=0){
            result = r-n;  // 7-3=4
            s++; // 1
            ns=n; // num + suff = num
            if(ns>=result){
                cout<<"Case "<<c<<": "<<s<<nl;
                break;
            }else{
                result = result - n; // 4-3=1
            }
        }
        c++;
    }
}

int main()
{
	int r, n;
    int ca = 1;
    string im = "impossible";
    while(cin>>r>>n){
        if(r==0 && n==0) break;
        int c=0;    
        if((n*26+n) < r){
            cout<<"Case "<<ca<<": "<<im<<nl;
        }else{
            int i = n;
            while(i<r){
                i+=n;
                c++;
            }
            cout<<"Case "<<ca<<": "<<c<<nl;
        }
        ca++;
    }

	return 0;
}


