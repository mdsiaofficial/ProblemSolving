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

    int n ;
    int answer=0;
    cin>>n;
    int A[n+1][n+1];
    for(int i = 1 ; i <= n ; i ++ )
        for(int j = 1 ; j <= n ; j ++ )
        {
            cin>>A[i][j];
            if(i==j || i==(n/2+1) || j==(n/2+1) || (n-i+1)==j) answer+=A[i][j];
        }
    cout<<answer;
    return 0;
}
