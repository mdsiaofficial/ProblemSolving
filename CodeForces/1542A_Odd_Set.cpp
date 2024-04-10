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
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;


int main() {

    long long t;
    cin>>t;
    while (t--){
        int n;cin>>n;
        int arr[2*n];
        int even=0;
        int odd=0;
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
            if(arr[i]%2==0) even++;
            else odd++;
        }

        (even == odd)? cout<<"Yes\n":cout<<"No\n";
    }
    
    return 0;
}
