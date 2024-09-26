#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <bitset>
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed << setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

string binary(int n){
    
    const unsigned long long size = 64; 
    // cout<<"Number: "<<n<<nl;
    // cout<<" "<<typeid(n).name()<<nl;

    unsigned long long x = (log2(n));
    // cout<<"Size: "<<x<<nl;
    // cout<<" "<<typeid(x).name()<<nl;

    bitset <size> binaryNumber(n); 
    // n = number , ei number re binary convert kore bitset er vitore rakhbo, 1,0 er sequence hisebe.. 

    // cout<<"64 bit binary: "<<bitset<64>(n)<<nl;
    // cout<<" "<<typeid(bitset<64>(n)).name()<<nl;   
    // cout<<"only usable Binary: "<<bitset<64>(n).to_string()<<nl;
    // cout<<"only usable Binary: "<<bitset<64>(n).to_string().substr(64-x-1)<<nl;
    // cout<<"only usable Binary: "<<binaryNumber.to_string()<<nl;
    // cout<<"only usable Binary: "<<binaryNumber.to_string().substr(64-x-1)<<nl;
    // cout<<" "<<typeid(bitset<64>(n).to_string().substr(64-x-1)).name()<<nl;

    // return (binaryNumber.to_string().substr(64-x-1));
    return (binaryNumber.to_string().substr(64-x-1));
    
}

int main()
{
    cout << binary(5);
    
    // int d =1;
    // for(int i=0; i<=100; i++){
    //     cout<<d<<"  "<<binary(d)<<nl;
    //     d++;
    // }


    return 0;
}