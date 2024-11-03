#include<bits/stdc++.h>
#include <stdlib.h>
#include <cstdlib>
#include <string>

#define nl endl
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
// #define nl cout<<"\n"
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

//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe

class Solution {
public:
    bool isBalanced(string num) {
      int len = num.length();
      int even = 0, odd = 0;
      // int i = num[0]-'0';
      // cout<<i;
      for(int i=0; i<len; i++){
        if(i%2 == 0) even += (num[i]-'0');
        else odd += (num[i]-'0');
      }
      if(even == odd) return true;
      else return false;
    }
};


int main() {
    fastio;

    Solution s;
    cout<<s.isBalanced("1234")<<endl;
    cout<<s.isBalanced("24123");



    return 0;
}
