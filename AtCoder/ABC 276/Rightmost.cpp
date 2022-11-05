#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>

// amar macros
#define ll long long
#define pi 3.14159
#define sp(n) setprecision(int (n))
#define fsp(n) fixed<<setprecision(int (n))


#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;
int main(){

    string some;
    cin >> some;
    int c=-1;

    for (int i = 0; i < sizeof(some); i++){
        if(some[i]=='a'){
            c=i+1;
        }
    }

    if(c>0){
        cout << c << endl;
    }else{
        cout << c << endl;
    }

    return 0;
}
