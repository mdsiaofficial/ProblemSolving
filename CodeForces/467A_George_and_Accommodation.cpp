#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl endl
#define ll long long int
#define ld long double
#define ull unsigned long long
#define vll vector<ll>
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

class Solution {
public:
    void solve (){
      ll n;cin>>n;

      vll p(n);
      vll q(n);
      ll c=0;
      for(int i=0; i<n; i++){
        cin>>p[i]>>q[i];
        if(q[i]-p[i] > 1) c++;
      }
      cout<<c<<nl;
    }
};

int main() {
    // ios_base::sync_with_stdio(false); cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    Solution soln;
    
    ll t=1;
    // cin>>t;
    for(ll i=1; i<=t; i++){
        // cout<<"Case #"<<i<<": ";
        soln.solve();
    }
    return 0;
}