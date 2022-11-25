#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>
#include <string>

#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))

using namespace std;
int main(){

    int t;
    cin >> t;
    int lowest;
    int pos;
    int num[t];
    for(int i=0; i<t; i++){
        cin >> num[t];
    }
    lowest = num[0];
    pos = 0;
    for(int j=0; j<t; j++){

        for (int k = 0; k < t; k++){

            if(num[j]<num[k]){
                lowest = num[j];
                pos = j;
            }
        }
    }
    cout << "Menor valor: " << lowest << endl;
    cout << "Posicao: " << pos << endl;
    
    return 0;
}