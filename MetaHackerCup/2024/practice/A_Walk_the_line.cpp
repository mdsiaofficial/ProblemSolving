#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>


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
        ll n, k;
        
        cin>>n>>k;

        vll arr(n);
        for(auto &x : arr){
            cin>>x;
        }

        sort(arr.begin(), arr.end());

        if(n==1){
            cout<< (arr[0] <= k? "YES":"NO")<<nl;
            return;
        }

        ll res = (2*n-3) * arr[0];

        cout<< ( res <= k ? "YES": "NO") <<nl;

    }
};

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    // freopen("walk_the_line_input.txt", "r", stdin);
    // freopen("walk_the_line_output.txt", "w", stdout);

    Solution soln;
    
    ll t;
    cin>>t;
    for(ll i=1; i<=t; i++){
        cout<<"Case #"<<i<<": ";
        soln.solve();
    }
    return 0;
}