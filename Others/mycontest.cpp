#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>
#include <string>

#define ll long long
#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))

using namespace std;
int main(){

    ld a, b;
    char x;
    cin >> a >> x >> b;
    //ld c = a + b;
    string cc = to_string(a+b);
    //cout <<fs(0)<< a+b << endl;
    //cout << cc << endl;

    cout.setf(ios::fixed);
    cout << setprecision(0) << a + b << endl;
    
    return 0;
}

