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
        ll a,b;
        cin>>a>>b;
        // int c=1;
        // if(a>=b){
        //     for(int j=0; j<sizeof(b); j++){
        //         if((a%10)==(b%10)){
        //             a=a/10;
        //             b=b/10;
        //         }else{
        //             c=0;
        //             break;                    
        //         }
        //     }
        //     if(c==0) cout<<"nao encaixa"<<endl;
        //     else cout<<"encaixa"<<endl;
        // }else{
        //     cout<<"nao encaixa"<<endl;
        // }
        string aa = to_string(a);
        string bb = to_string(b);
        int aa_len = aa.length();
        int bb_len = bb.length();
        bool flag = false;
        if(aa_len>=bb_len){
            string aa_temp = aa.substr(aa_len-bb_len);
            // cout<<aa_temp;
            if(aa_temp==bb) cout<<"encaixa"<<endl;
            else cout << "nao encaixa" << endl;
        }else{
            cout << "nao encaixa" << endl;
        }
        
    }
    return 0;
}