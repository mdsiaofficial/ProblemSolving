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

    int number[20];

    for(int i=0; i<20; i++){
        cin >> number[i];

    }

    //output here
    int i = 19;
    for(int j=0; j<20; j++){

        cout <<"N[" << j << "] = " << number[i] << endl;
        i--;
    }

    return 0;
}
