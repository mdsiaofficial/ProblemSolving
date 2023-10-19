#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define el endl
#define ll long long
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
#define ld long double
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);
    int c = 0;

    for (int i = 0; i < n - 1; i++){
 
        if (abs(a[i] - a[i + 1]) > 1){
            c++;
        }

        if (c){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    cin >> t;
 
    while (t--){
        solve();
    }
}

