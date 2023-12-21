#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;


int main() {
    
    int rungame=1;
    int a;
    int avrg=0, product=1;
    int c=0;
    while (rungame)
    {
        auto q;
        cout<<"Input 'q' to quit the game.\nYou can continue with number:";
        cin>>q;
        if(q=='q'){
            break;
            rungame=0;
        }else{
            a=q;
        }

        
        c++;
        avrg=avrg+a;
        product=product*a;

    }
    cout<<"Average: "<<avrg/c<<endl;
    cout<<"Product: "<<product<<endl;

    return 0;
}