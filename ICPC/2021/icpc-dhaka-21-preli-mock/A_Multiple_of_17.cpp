#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
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

    string n;
    while (cin>>n)
    {
        if(n=="0") break;
       //string y;
        //std::string::size_type sz;   // alias of size_t
        ll s=n.length();
        char x=n[s-1];
        //ll d= stol(x);
        //ll d=stol(&x,y,10);
        //ll d=stol (x,&sz);
        //ll d = stoll( const std::string& str, std::size_t* pos = nullptr, int base = 10 );
        ll d=atoi(&x);
        ll d5=d*5;
        

        cout<<s<<" "<<x<<" "<<d<<endl;
    }
    
    
    return 0;
}