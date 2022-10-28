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

    int t;

    cin >> t;
    for (int i = 0; i < t; i++){
    
    
    }

    return 0;
}