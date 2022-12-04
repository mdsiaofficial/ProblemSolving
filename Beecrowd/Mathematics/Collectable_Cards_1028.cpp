#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>
#include <string>

#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))

using namespace std;
int main(){

    ll t;
    cin >> t;

    for(ll i=0; i<t; i++){
        int a,b;
        cin>>a>>b;
        int gcd;
        int min=(a<b)?a:b;
        for(int j=1; i<=min; i++){

            if(a%j==0 && b%j==0){

                gcd=j;
            }
        }
        cout<<gcd<<endl;

    }
    return 0;
}