#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

// binary exponantiatioin to solve this.

llu last_digit_of_pwr(llu b, llu p){

    llu r=1;
    while (p)
    {
        if(p%2==0){
            b=(b*b)%10;
            p=p/2;
        }else{
            r=(r*b)%10;
            p=p-1;
        }
    }
    return r%10;
}

int main(int argc, char *argv[])
{
    llu p;
    cin>>p;
    cout<<last_digit_of_pwr(1378, p)<<endl;
	return 0;
}
