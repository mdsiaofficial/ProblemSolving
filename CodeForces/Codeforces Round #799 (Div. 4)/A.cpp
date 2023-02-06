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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x=0;
        int arr[4]={a,b,c,d};
        for(int i=1; i<4; i++){
            if(arr[0]<arr[i]){
                x++;
            }
        }
        cout<<x<<endl;
    }
    
    return 0;
}