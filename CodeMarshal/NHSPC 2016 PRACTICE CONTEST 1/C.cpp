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
        int dia;
        cin >> dia;
        float length = sqrt((dia*dia) / 2);

        float area = length * sqrt((dia * dia) - (length * length));
        cout <<fixed<<setprecision(5)<< "Case :" << i << " " << area << endl;
    }
    
    return 0;
}