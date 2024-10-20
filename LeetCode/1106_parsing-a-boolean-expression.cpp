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
    ll n, k;cin >> n >> k;
    ll a = n * (n + 1) / 2;
    ll b = (n - k) * (n - k + 1) / 2;
    a -= b;
    if (a & 1) NO;
    else YES;
  }
  bool parseBoolExpr(string expression) {
    // Repeatedly simplify the expression by evaluating subexpressions
    while (expression.length() > 1) {
      int start = expression.find_last_of("!&|");
      int end = expression.find(')', start);
      string subExpr = expression.substr(start, end - start + 1);
      char result = evaluateSubExpr(subExpr);
      expression.replace(start, end - start + 1, 1,
        result);  // Replace with evaluated result
    }
    return expression[0] == 't';
  }

private:
  char evaluateSubExpr(const string& subExpr) {
    // Extract the operator and the enclosed values
    char op = subExpr[0];
    string values = subExpr.substr(2, subExpr.length() - 3);

    // Apply logical operations based on the operator
    if (op == '!') return values[0] == 't' ? 'f' : 't';
    if (op == '&') return values.find('f') != string::npos ? 'f' : 't';
    if (op == '|') return values.find('t') != string::npos ? 't' : 'f';

    return 'f';  // This point should never be reached
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
    // soln.solve();
  }

  //* Single test
  // soln.solve();

  return 0;
}