#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>

#define ll long long
#define pi 3.14159
#define sp(n) setprecision(int (n))
#define fsp(n) fixed<<setprecision(int (n))

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;
int main(){

    long long test;
    cin >> test;

    
    for (long long i = 0; i < test; i++){

        long long number;
        string nnn;
        
        cin >> nnn;

        number = strlen(nnn);

        if(nnn(number-1)%2==0){
            cout << "even" << endl;
        }else{
            cout << "odd" << endl;
        }
    }

    return 0;
}
