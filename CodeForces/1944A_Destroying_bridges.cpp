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

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n,k;cin>>n>>k;
        int need = n-1;
        if(k>=need) cout<< 1<<nl;
        else cout<<n<<nl;
    }

    return 0;
}
