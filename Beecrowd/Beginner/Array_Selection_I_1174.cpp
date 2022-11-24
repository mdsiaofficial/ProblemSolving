#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
#define ld long double
#define fsp(n) fixed<<setprecision(int(n))
#define sp(n) setprecision(int(n))

using namespace std;
int main(){

    double number[100];

    for(int i=0; i<100; i++){
        cin >> number[i];

    }

    for(int j=0; j<100; j++){
        if(number[j]<=10.0){
            cout <<fsp(1)<< "A[" << j << "] = " << number[j] << endl;
        }
    }

    return 0;
}
