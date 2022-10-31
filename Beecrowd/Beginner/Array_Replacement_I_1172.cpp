#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>

#define ll long long

using namespace std;
int main(){

    int x[10];
    for (int i = 0; i < 10; i++){
        cin >> x[i];
        if (x[i] < 1){
            x[i] = 1;
        }
    }

    for (int j = 0; j < 10; j++){
        cout << "X["<<j<<"]"" = " << x[j] << endl;
        
    }
    return 0;
}
