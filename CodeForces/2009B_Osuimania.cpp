#include<bits/stdc++.h>
#include <stdlib.h>

#define nl endl
#define el cout<<"\n"
#define ll long long
#define ld long double
#define ull unsigned long long

#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define PLL pair<ll,ll>
#define pii pair<int,int>
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define scn(n) scanf("%d",&n)
#define scnll(n) scanf("%lld",&n)

#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define no cout<<"no\n"

#define mod 1000000007LL
#define mod1 1000000007LL
#define mod2 1000000009LL
#define inf 1000000000000000LL
#define N 200000
#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define mod9 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))


#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

// * -----------------------------------------------------------
// * run program on cli
// *  -----------------------------------------------------------
//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe


class Solution {
public:
  void solve() {
    vector<int> result;
    int n; cin>>n;
    while(n--)
    {
        string s; cin>>s;
        for(int i=0;i<4;i++){
            if(s[i]=='#') result.pb(i+1);
        }
    }
    int size = result.size()-1;
    for(int i=size;i>=0;i--){
      cout<<result[i]<<" ";
    }
    cout<<nl;
  }
};


int main() {
  // ios_base::sync_with_stdio(false); cin.tie(NULL);
  //* For External input/output
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  Solution soln;

  ll t;
  cin >> t;

  //* Test case loop
  for (ll i = 1; i <= t; i++) {
    // cout<<"Case #"<<i<<": ";
    soln.solve();
  }

  //* Single test
  // soln.solve();

  return 0;
}