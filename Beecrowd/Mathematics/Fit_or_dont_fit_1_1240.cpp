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
    cin>>t;

    for(int i=0; i<t; i++){
        int a,b;
        cin>>a>>b;

        if(a>b){
            for(int j=0; j<sizeof(b); j++){
                if((a%10)==(b%10)){
                    a=a/10;
                    b=b/10;
                }else{
                    
                }
            }
        }else{
            cout<<"nao encaixa"<<endl;
        }
        
    }
    return 0;
}