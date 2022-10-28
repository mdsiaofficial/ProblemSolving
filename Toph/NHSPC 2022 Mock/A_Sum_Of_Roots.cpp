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
    int a, b, c;
    cin >> a >> b >> c;

    int res = mySqrt(a) + mySqrt(b) + mySqrt(c);

    cout << res << endl;
    
    return 0;
}