#include <bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>
#include <vector>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;
int main(){

    int t;
    cin>>t;

    while (t--)
    {
        double a,b,c;
        cin>>a>>b>>c;
        double av=(400/a), bv=(400/b), cv=(400/c);

        if(av>bv && av>cv){
            cout<<"ALICE"<<endl;
        }else if(bv>av && bv>cv){
            cout<<"BOB"<<endl;
        }else{
            cout<<"CHARLIE"<<endl;
        }

    }
    
    return 0;
}