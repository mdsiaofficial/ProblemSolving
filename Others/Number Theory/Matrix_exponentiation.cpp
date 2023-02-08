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

void matrix_multiply(ll a[n][n], ll b[n][n], ll n){
    ll result [n][n];
    // a, b matrix multiply
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            result [i][j]=0;
            for(ll k=0; k<n; k++){
                ll u= a[i][k]*b[k][j];
                result[i][j]=result[i][j]+u;
            }
        }
    }
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            a[i][j]=result[i][j];
        }
    }
}


void exp(ll a[n][n], ll b[n][n], ll p){
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
            matrix_multiply(arr, arr, n);
            p=p/2;
        }else{
            //r=(r*b)%mod;
            matrix_multiply(idm, arr, n);
            p=p-1;
        }
    }
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            arr[i][j]=idm[i][j];
        }
    }
}
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
                matrix_multiply(arr, arr, n);
                p=p/2;
            }else{
                //r=(r*b)%mod;
                matrix_multiply(idm, arr, n);
                p=p-1;
            }
        }
        for(ll i=0; i<n; i++){
            for(ll j=0; j<n; j++){
                arr[i][j]=idm[i][j];
            }
        }


        //cout<<binary_exp(b,p)<<endl;
    }
    return 0;
}