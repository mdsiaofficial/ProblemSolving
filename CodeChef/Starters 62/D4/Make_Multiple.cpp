#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>

//unsolved

#define ll long long
using namespace std;
int main(){

    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a, b;
        cin >> a >> b;

        for (int j = 0; j < b; j++){

            if((b+i)%(a+i)==0){
                cout << "YES" << endl;
                break;
            }else{
                continue;
            }
        }
    }


    
    return 0;
}
