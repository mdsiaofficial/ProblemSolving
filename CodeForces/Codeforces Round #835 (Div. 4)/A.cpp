#include <bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
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

int mid(int a, int b, int c){
    int max, min, mid;
    if(a>b && a>c){
        max=a;
        if(b<c){
            min=b;
            mid=c;
        }else{
            min=c;
            mid=b;
        }
    }else if(b>c && b>a){
        max=b;
        
        if(a<c){
            min=a;
            mid=c;
        }else{
            min=c;
            mid=a;
        }
    }else{
        max=c;
        
        if(b<a){
            min=b;
            mid=a;
        }else{
            min=a;
            mid=b;
        }
    }

    return mid;
}
int main(){

    ll t;
    cin>>t;
    for(ll i=0; i<t; i++){
        int a,b,c;
        cin>>a>>b>>c;

        cout<<mid(a,b,c)<<endl;
    }
    return 0;
}