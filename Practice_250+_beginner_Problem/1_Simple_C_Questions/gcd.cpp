#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>

// amar macros
#define ll long long
#define pi 3.14159
#define sp(n) setprecision(int (n))
#define fsp(n) fixed<<setprecision(int (n))


#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;
int main(){

    int n1, n2;
    cin >> n1 >> n2;

    int a = n1, b = n2; // eita lagbe LCM bair korar jonno

    int gcd;

    // if diya konta boro seita bair koira while loop e gcd bair kora
    if(n1>n2){
        while (n2!=0)
        {
            int rem = n1 % n2;
            n1 = n2;
            n2 = rem;
        }
        gcd = n1;
        cout <<"GCD: "<< n1 << endl;
    }else{
        while (n1!=0)
        {
            int rem = n2 % n1;
            n2 = n1;
            n1 = rem;
        }
        gcd = n2;
        cout <<"GCD: "<< n2 << endl;
    }


    // lcm er shortcut law...
    int lcm = (a * b) / gcd;
    cout << "LCM: " << lcm << endl;


    return 0;
}
