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
    int test;
    cin >> test;
    for (int i = 0; i < test; i++){
        int number;
        cin >> number;
        
        if(number%2==0){
            cout << "even" << endl;
        }else{
            cout << "odd" << endl;
        }
    }

    return 0;
}
