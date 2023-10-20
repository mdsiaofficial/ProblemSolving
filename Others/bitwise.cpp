#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define el endl
#define ll long long
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
#define ld long double
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

void solve(){
   
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    //cin >> t;
    while (t--){
        
    }


    // Bitwise AND (&) operator.
    char x=9, y=8; 
    // bitwise operator
    // x=1(0000 0001)
    // y=2(0000 0010)
    //1&2 = 0(0000 0000) bitwise and operatorP

    // logical operator
    // on the other hand
    // 1&&2 = 1 because here it counts the decimal value. 
    // other than 0 decimal, all are true. only 0 is false. 
    // so here, 1 = true, 2 = true. so, 1 && 2 = true && true = 1(true).
    if(x&y){
        cout<<"x & y is true"<<el;
    }else{
        cout<<"x & y is false"<<el;
    }
    if(x&&y){
        cout<<"x && y is true"<<el;
    }else{
        cout<<"x && y is false"<<el;
    }



    // Bitwise OR (|) operator.
    x=6, y=4; 
    // bitwise operator
    // x=6(0000 0110)
    // y=4(0000 0100)
    //6|4 = 6(0000 0110) bitwise or operatorP

    
    if(x|y){
        cout<<"x | y is true"<<el;
    }else{
        cout<<"x | y is false"<<el;
    }

    if(x||y){
        cout<<"x || y is true"<<el;
    }else{
        cout<<"x || y is false"<<el;
    }


}

