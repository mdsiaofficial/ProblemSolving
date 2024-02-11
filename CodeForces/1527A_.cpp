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
#define llu unsigned long long
#define mod 90000007
#define fs(n) fixed << setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int x=1;
        while(x<=n){
            x*=2;
        }
        cout<<x/2-1<<nl;
    }


    return 0;
}
