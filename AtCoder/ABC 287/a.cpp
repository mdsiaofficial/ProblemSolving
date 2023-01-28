#include <bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;


int main(){

    string n={"Against"};
    string y={"For"};
    int n1=0;
    int y1=0;

    int t;
    cin>>t;
    string maj[t];
    forn(t)
    {
        
        cin>>maj[i];

    }

    forn(t)
    {
        if(maj[i]==n){
            n1++;
        }else{
            y1++;
        }
    }
    if(y1>n1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
    return 0;
}