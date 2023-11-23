#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define ell cout<<endl
#define el endl
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
#define ld long double
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

void solve(){
   
}
 // unsolved
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n,l,r;
    cin>>n>>l>>r;
    ll a[n];
    ll c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i!=j && (l<=a[i]+a[j]) && (a[i]+a[j]<=r) && (a[i]^a[j])%2!=0){
                c++;
            }
        }
    }
    cout<<c<<el;

    return 0;
}