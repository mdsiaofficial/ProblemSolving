#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // area from diagonal distance:
    // Area = length * sqrt ( dia^2 - length^2)

    int n;
    cin >> n;
    
    for (int i = 1; i <=n; i++)
    {
        double dia;
        cin >> dia;
        double length = sqrt((dia*dia) / 2);

        double area = length * sqrt((dia * dia) - (length * length));
        cout <<fixed<<setprecision(5)<< "Land " << i << ": " << area << endl;
    }
    
    return 0;
}