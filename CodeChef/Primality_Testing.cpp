#include <bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

bool checkprime (llu n){
    if(n<2){
        return false;
    }
    if(n<=3){
        return true;
    }
    if(n%2==0){
        return false;
    }

    for(llu i=3; i<=sqrt(n); i=i+2){
        if(n%i==0) return false;

    }
    return true;
}

int main(){

    llu n;
        cin>>n;
        if(checkprime(n)){
            cout<<"PRIME"<<endl;
        }else{
            cout<<"COMPOSITE"<<endl;
        }
    
    return 0;
}