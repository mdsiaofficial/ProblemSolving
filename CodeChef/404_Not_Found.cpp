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
    string games;cin>>games;
    map<char,int> ad;
    for(auto &c:games){
      ad[c]++;
    }
    cout<<(ad['A']>ad['D'] ? "Anton": ad['A']<ad['D'] ? "Danik" : "Friendship")<<nl;
  }
};
int main() {
  // ios_base::sync_with_stdio(false); cin.tie(NULL);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  int n;cin>>n;
	if(n==404) cout<<"NOT FOUND"<<endl;
	else cout<<"FOUND"<<endl;
  return 0;
}