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

    int n,k;

    cin>>n>>k;
    int s[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    int c=0;
    for(int j=0; j<n; j++){
        
        if((s[j]>=s[k-1]) && (s[j]>0)){

            c++;
        }
    }

    cout<<c<<endl;

    return 0;
}