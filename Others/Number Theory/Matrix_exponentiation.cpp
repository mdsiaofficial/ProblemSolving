#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

// matrix exponantiatioin to solve this.
long long binary_exp(long long b, long long p){
    long long r=1;
    while (p)
    {
        if(p%2==0){
            b=b*b;
            p=p/2;
        }else{
            r=r*b;
            p=p-1;
        }
    }
    return r;
}
long long binary_exp_2(long long b, long long p){
    long long r=1;
        
    while (p)
    {
        if(p%2==0){
            b=(b*b)%mod;
            p=p/2;
        }else{
            r=(r*b)%mod;
            p=p-1;
        }
    }
    return r;
}

void matrix_multiply(ll idm[n][n], ll arr[n][n], )

int main(){
    int t;
    cin>>t;
    while (t--){
        // n - size of matrix
        // p - power of matrix
        ll n, p; 
        cin>>n>>p;

        ll arr[n][n];
        ll idm[n][n];

        // taking input to user matrix
        for(ll i=1;i<=n;i++)
		{
			for(ll j=1;j<=n;j++)
			{
				cin>>ar[i][j];
			}
		}

        // here is identity matrix :
        for(ll i=1;i<=n;i++)
		{
			for(ll j=1;j<=n;j++)
			{
                if(i==j) idm[i][j]=1;
                else idm[i][j]=0;
			}
		}

        // doing exponentiation
        while(p)
        {
            if(p%2==0){
                //b=(b*b)%mod;

                p=p/2;
            }else{
                //r=(r*b)%mod;
                p=p-1;
            }
        }


        //cout<<binary_exp(b,p)<<endl;
    }
    return 0;
}