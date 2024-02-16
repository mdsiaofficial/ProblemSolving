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

unsigned long long decimal(string b){
    // using bitset
    const unsigned long long size = 64; 
    bitset <size> decimalNumber(b); 
    return decimalNumber.to_ullong();
    
}


unsigned long long decimalNumber(string b){
    unsigned long long decimal = stoull(b, nullptr, 2);
    return decimal;
}


int main()
{
    cout<<decimal("101")<<nl;

    cout<<decimalNumber("101")<<nl;
    


    return 0;
}