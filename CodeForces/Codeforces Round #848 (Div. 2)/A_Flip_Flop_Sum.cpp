#include <bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
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
        ll n;
        cin>>n;
        int d[n];
        for(int i=0; i<n; i++)
        {
            cin>>d[i];
            if(d[i]==1){
                d[i]=-1;
            }else{
                d[i]=1;
            }
            /* code */
        }

        
        

    }
    
    return 0;
}