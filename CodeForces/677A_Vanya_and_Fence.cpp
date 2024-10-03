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

void solve() {
  int n, h;cin>>n>>h;int a[n], c=0;
  for(int i=0; i<n;i++){
    cin>>a[i];
    if(a[i]%h==0){
      c += (a[i]/h);
    }else if(a[i]>h) {
      // cout<<round(a[i]/h)<<nl;
      c += (a[i]/h)+1;
    }else{
      c++;
    }
  }
  cout<<c<<nl;
}

int main() {

    solve();

    return 0;
}
