#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define nl endl
#define ll long long
#define ld long double
#define llu unsigned long long
#define mod 90000007
#define fs(n) fixed << setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

int main(int argc, char *argv[])
{

    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for(auto i:s){
            if(i=='0')c++;
        }

        if(c%2==0){
            cout<<"BOB\n";
        }else if(c==1){
            cout<<"BOB\n";
        }else{
            cout<<"ALICE\n";
        }

    }


    return 0;
}
