#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>


#define ll long long
#define pi 3.14159
#define sp(n) setprecision(int (n))
#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;
int main(){
    int year;
    cin>>year;

    int one,two,three,four;
    one = year % 10;
    int temp = year / 10;

    two = temp % 10;
    temp = temp / 10;
    three = temp % 10;
    temp = temp / 10;
    four = temp % 10;

    for (int i = 0; i < 4; i++){
        if()
    }
        cout << one << two << three << four;
    return 0;
}
