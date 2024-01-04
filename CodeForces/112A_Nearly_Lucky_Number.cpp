#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

int main(){
    long long n;
    cin>>n;

    long long c=log10(n)+1;

    long long count=0;

    while(n>0){
        long long d = n%10;
        if(d==4 || d==7) count++;
        n=n/10;
    }
    
    if(c==1){
        cout<<"NO"<<endl;
    }else{
        if(count==c){
            (count==4 || count==7)? cout<<"YES"<<endl : cout<<"NO"<<endl;
        }else{
            (count==4 || count==7)? cout<<"YES"<<endl : cout<<"NO"<<endl;
        }
    }

    return 0;
}

/* 
    algo -
    1- break down the number by digits
    2- check digit is 4 or 7 and count.
    3- check count = number length or 4 or 7 then yes. neither no

 */