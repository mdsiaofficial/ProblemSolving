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

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
// a b c d e f g h i j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z


// solved //


int main() {
    int t;
    cin>>t;
    while (t--)
    {
        string s; cin>>s;
        string c = "abc";
        if(s == c) cout<< "Yes\n";
        else if(s[0] == 'a' || s[1] == 'b' || s[2] == 'c') cout<< "Yes\n";
        else cout<< "No\n";
    }
    

    return 0;
}