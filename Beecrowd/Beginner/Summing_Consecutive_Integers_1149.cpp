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

    int a, n;
    cin >> a >> n;
    int sum=0;
    while (n<0 || n==0)
    {
        cin >> n;
        
    }
    for (int i = 0; i < n;i++){
        sum = sum + a + i;
    }
    cout << sum << endl;

    return 0;
}