#include <bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
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


    int n, a[2000], sml,smlp;

    cin >> n;

    for(int i = 0 ;i < n ;i++){
        cin >> a[i];
    }

    sml = a[0] ;

    for (int i = 0 ; i < n ; i++ ){

        if ( a[i] <= sml ){
            sml = a[i] ;
            smlp = i ;
        }
    }

    cout << "Menor valor: " << sml << "\nPosicao: " << smlp << endl;

    return 0;
}