#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    const double pi=3.14159;
    float radius;

    cin>>radius;

    float area= pi*pow(radius,2);
    float circumference= 2*pi*radius;

    cout<<"Area: "<<area<<" & Circumference: "<<circumference<<endl;
    return 0;
}