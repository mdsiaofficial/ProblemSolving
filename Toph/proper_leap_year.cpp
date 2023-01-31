#include <bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>
#include <vector>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;
int main(){
    int year;
    cin>>year;
/*
    if((y%400==0 || y%4==0) && y%100!=0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
*/
    if (year % 400 == 0) {
        printf("Yes");
    }
    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (year % 100 == 0) {
        printf("No");
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0) {
        printf("Yes");
    }
    // all other years are not leap years
    else {
        printf("No");
    }
    return 0;
}