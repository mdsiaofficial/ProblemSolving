#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double mySqrt(double x) {
    double r = x;
    double precision = 10e-10;
    
    while (abs(x - r * r) > precision) {
        r = (r + x / r) / 2;
    }
    
    return r;
}

int main()
{

    double n;
    cin >> n;

    cout <<fixed<<setprecision(3)<< mySqrt(n) << endl;


    return 0;
}
