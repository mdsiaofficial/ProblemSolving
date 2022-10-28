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
    int n;

    cin >> n;
    int a[n];
    int Even_Odd[n];
    for (int i = 0; i < n; i++)
    {
        
        cin >> a[i];

        if(a[i]%2==0){
            Even_Odd[i] = 0;
        }else{
            Even_Odd[i] = 1;
        }

    }

    for (int j = 0; j < n; j++){
        cout << Even_Odd[j] << " ";
    }

    return 0;
}