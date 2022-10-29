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


    float age;
    float sum = 0;
    float c = 0;
/*     
    while (age>0)
    {
        cin >> age;
        sum = sum + age;
        c++;
        cout << age << endl;
    }
 */

    while (true)
    {
        cin >> age;
        
        if(age>0){
            sum = sum + age;
            c++;
        }else{
            break;
        }
        
        //cout << age << endl;
    }

    float avrg = sum / c;
    cout <<fixed<<setprecision(2)<< avrg << endl;
    return 0;
}