#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>

#define ll long long
using namespace std;
int main(){
    int year;
    //cout << "Enter a year: ";
    cin >> year;

    // leap year if perfectly divisible by 400
    if (year % 400 == 0) {
        cout << "No";
    }
    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (year % 100 == 0) {
        cout << "No";
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0) {
        cout << "Yes";
    }
    // all other years are not leap years
    else {
        cout << "No";
    }
    return 0;
}
