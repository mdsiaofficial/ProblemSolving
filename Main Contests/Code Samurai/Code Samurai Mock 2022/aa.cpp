#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <algorithm>
#include <iomanip>//this library need to use setprecision
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
#define ld long double
#define fsp(n) fixed<<setprecision(int(n))
#define sp(n) setprecision(int(n))

using namespace std;

int main() {

    string a,x,b;
    cin>>a>>x>>b;
    string one=reverse(a.begin(), a.end());
    string two=reverse(b.begin(), b.end());
    cout<<one<<endl;

    return 0;
}