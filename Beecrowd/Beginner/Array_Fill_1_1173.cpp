#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>

#define ll long long

using namespace std;
int main(){
/* 
    int x[10];
    int v;
    cin >> v;
    x[0] = v;
    for (int i = 1; i < 10; i++){

        x[i] = x[i - 1] * 2;
    }

    for (int j = 0; j < 10; j++){
        cout << "X["<<j<<"]"" = " << x[j] << endl;
        
    } */
    
    int n;
    cin >> n;
    for(int i = 0; i < 10; i++){
        cout << "N[" << i << "] = " << n << "\n";
        n *= 2;
    }

    return 0;
}
