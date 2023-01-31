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

int fibo(int x){
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return fibo(x-1)+fibo(x-2);
}
int main(){
    int x;
    cin>>x;
    int f[1000];
    for(int i=0; i<=x+1; i++){
        f[i]=fibo(i);
    }
    cout<<f[x]<<endl;
    return 0;
}