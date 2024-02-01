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
        int x,y;
        cin>>x>>y;
        if(x<=(y*10)){
            cout<<"No"<<endl;

        }else{
            cout<<"Yes"<<endl;
        }
    }

    return 0;
}