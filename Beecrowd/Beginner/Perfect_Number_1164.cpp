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
    int n =36; cin>>n;
    int sum=0;
    for(int i=1; i*i<=n; i++){
      // cout<<i<<" ";
      if(n%i==0){
        sum +=i;
        // printf("-%d-", sum);
        if(i!=n/i) {
          sum += n/i;
          // printf("-%d-", sum);
        }
      }
    }
    // cout<<sum-n<<nl;
    if(n == sum-n) cout<<n<<" eh perfeito"<<nl;
    else cout<<n<<" nao eh perfeito"<<nl;
  }
};


int main() {
  // ios_base::sync_with_stdio(false); cin.tie(NULL);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  Solution soln;

  ll t;
  cin >> t;
  for (ll i = 1; i <= t; i++) {
    // cout<<"Case #"<<i<<": ";
    soln.solve();
  }
  // soln.solve();
  return 0;
}