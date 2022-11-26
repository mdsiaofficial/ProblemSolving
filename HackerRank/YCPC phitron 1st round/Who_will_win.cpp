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
int main(){

    int a, b;
    cin>>a>>b;
    if(a>b){
        cout<<"Argentina"<<endl;

    }else if(a<b){
    
        cout<<"Brazil"<<endl;
    
    }else if(a==b){
        cout<<"Draw"<<endl;
    }

    
    return 0;
}