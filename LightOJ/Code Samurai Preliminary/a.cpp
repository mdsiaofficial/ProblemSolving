#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
#define ld long double
#define fsp(n) fixed<<setprecision(int(n))
#define sp(n) setprecision(int(n))

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        map<char, int> m;
        for (int i = 0; i < n; i++){

            string a;
            cin>>a;
            m[a[0]]++;

        }

        string ans = "impossible"
        for(auto it:m){
            if(it.second==3){
                ans = it.first;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
