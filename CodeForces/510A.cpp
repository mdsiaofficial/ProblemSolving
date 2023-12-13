#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;


int main() {
    
    int r, c;
    cin>>r>>c;
    
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(i%2==1) {
                cout<<"#";
            }else{
                if(i%4==0 && j==1){
                    cout<<"#";
                }else if(i%4!=0 && j==c){
                    cout<<"#";
                }else{
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

