#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl      '\n'
#define ll long long
#define ld long double
#define llu unsigned long long
#define mod 1000000007

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;



int main()    // main function
{
	ll t;
	cin>>t;
	while(t--)
	{
        char x;
        cin>>x;
        string y= {"codeforces"};
        int c=0;
        for(ll i=0; i<y.length(); i++){
            if(x==y[i]){
                cout<<"YES"<<endl;
                c++;
                break;
            }
        }
        if(c==0) cout<<"NO"<<endl;

	}
	return 0;
}
