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

    int n;
    cin>>n;

    for(int i=2; i<=n; i++){
        if(n%i==0){
            int c=0;
            while (n%i==0)
            {
                c++;
                n/=i;
            }
            cout<<i<<"^"<<c<<endl;
            
        }
    }
    return 0;
}