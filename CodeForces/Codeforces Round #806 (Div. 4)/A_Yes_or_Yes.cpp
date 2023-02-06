#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define llu unsigned long long

#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;
int main(){

    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        string check []={"YES","yES","YeS","YEs","yeS","Yes","yEs","yes"};
        int c=0;
        for(int i=0; i<8; i++){
            
            if(s==check[i]){
                c++;
            }
            if(c>1){
                break;
            }
        }
        if(c>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}