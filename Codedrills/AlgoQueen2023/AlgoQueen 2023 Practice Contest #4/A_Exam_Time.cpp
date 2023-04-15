#include <bits/stdc++.h>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

int main(){

    int x,y,z,t;
    cin>>x>>y>>z>>t;

    int h=x/t;
    if(h*z > y*z)
        cout<<y*z<<endl;
    else
        cout<<h*z<<endl;
    
    return 0;
}