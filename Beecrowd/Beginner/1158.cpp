#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>
#include <string>

#define ll long long
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

    for(int i=0; i<t; i++){
        int x, y;
        cin >> x >> y;

        int sum = 0;
        int c = 0;
        int temp = x;
        while (true)
        {
            if(temp%2!=0){
                sum += temp;
                cout << sum << endl;
            }
            if(c==y){
                break;
            }
            c++;
            temp++;
        }
        cout << sum << endl;
    }
    return 0;
}

