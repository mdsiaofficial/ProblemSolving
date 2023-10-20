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
    //1&2 = 0(0000 0000) bitwise and operator

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



    // Bitwise Left Shift (<<) operator.

    char u= 5; // 5 = 0000 0101
                                // 5 = 0 0 0 0 0 1 0 1
                                //     ! ! ! ! ! ! ! !  
    // when u<<1 then ->               X 0 0 0 0 1 0 1 0 (here last trailing position    
                                                        //filled with zero)
    // Left shift = First Operand * 2^Second Operand
    // 5 << 3 means , 5 * 2^3 = 40
    cout<<"Left shift: u << 3 = "<<(u<<3)<<el;

    

    // Bitwise Right Shift (<<) operator.
    
    char p= 5; // 5 = 0000 0101
                                // 5 = 0 0 0 0 0 1 0 1
                                //     ! ! ! ! ! ! ! !  
    // when p<<1 then ->             0 0 0 0 0 0 1 0 x (here first leading position    
                                                    //      filled with zero)

    // Right shift = First Operand / 2^Second Operand
    // 5 << 3 means , 5 / 2^3 = 0

    cout<<"Right shift: p >> 3 = "<<(p>>3)<<el;
}

