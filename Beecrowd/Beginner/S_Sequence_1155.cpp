#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
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
    float s=0;
    for (float i = 1; i <= 100; i++){
        s = s+( 1 / i);
    }
    cout <<fixed<<setprecision(2)<< s << endl;
    return 0;
}