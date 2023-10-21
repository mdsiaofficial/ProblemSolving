#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define MOD 1000000007
#define ell cout<<endl
#define el endl
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
#define ull unsigned long long
#define ld long double

#define vll vector<ll>
#define pll pair<ll,ll>
#define PB push_back

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

// SOLVED 
ll solve(ll a,ll b)
{
    if(b==0) return 1;
    if(b==1) return a%MOD;
    ll temp=solve(a,b/2);
    if(b%2==0) return (temp*temp)%MOD;
    else return (((temp*temp)%MOD)*a)%MOD;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        cout<<solve(a,b)<<"\n";
    }
}