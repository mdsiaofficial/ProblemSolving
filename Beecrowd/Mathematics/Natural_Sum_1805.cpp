#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>

// amar macros
#define ll long long
#define pi 3.14159
#define sp(n) setprecision(int (n))
#define fsp(n) fixed<<setprecision(int (n))


#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;
int main(){
/* 

    //this solutiion : time limit exceeded
    ll a, b;
    cin >> a >> b;
    ll sum = 0;
    for (ll i = a; i <=b; i++){
        sum += i;
    }
    cout << sum << endl;


 */



    //try 2: solved
    ll a,b;
    cin >> a >> b;
    // ll n = (b - a) + 1;
    // ll sum = (n / 2) * ((2 * a) + (n - 1));
    ll sum = (a + b) * (b - a + 1) / 2;
    cout << sum << endl;

    return 0;
}
