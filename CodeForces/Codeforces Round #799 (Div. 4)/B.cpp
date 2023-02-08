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
        int n;
        cin>>n;
        map<int, int>mp;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int c=0;
        int even=0;
        for(auto i: mp){
            if(i.second%2==1) c++;
            else even++;
        }
        cout<<c+((even/2)*2)<<endl;
    }
    
    return 0;
}