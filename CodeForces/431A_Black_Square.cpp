#include <bits/stdc++.h>
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
#define nl endl
using namespace std;



int main(int argc, char *argv[])
{
    ll a[5];
    for(int i=1; i<5; i++){
        cin>>a[i];
    }
    string s;
    cin>>s;

    ll result = 0;
    for(int i=0; i<s.length(); i++){
        result += a[s[i]-'0'];
        // cout<<s[i]-'0'<<" "<<typeid(s[i]-'0').name()<<nl;
    }
    cout<<result<<nl;
	return 0;
}
