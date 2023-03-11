#include <bits/stdc++.h>
#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))

using namespace std;


int main(){
    ll n;
    cin>>n;
    int c=0;
    while (n--)
    {
        int p, v, t;
        cin>>p>>v>>t;
        if(p+v+t>1) c++;
    }
    cout<<c<<endl;
    
    return 0;
}