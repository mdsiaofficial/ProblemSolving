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

// this algorithm is normal algo for number of divisors:
void number_of_divisors(ll n){
    vector<int>v;
    for(int i=1; i<=n; i++){
        if(n%i==0) v.push_back(i);
    }
    cout<<"Count: "<<v.size()<<endl;
    cout<<"Divisors: ";
    for(int j=0; j<v.size(); j++){
        cout<<v[j]<<" ";
    }
    cout<<nl;
}


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        number_of_divisors(n);
	}
	return 0;
}
