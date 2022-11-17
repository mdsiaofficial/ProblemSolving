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

    int p, n, j, m;

    cin >> p >> n >> j >> m;
    int x[3] = {n, j, m};
    int s = n + j + m;

    if (p == 1 && s>0)
    {
        cout << "YES" << endl;
    }else if(p==0 && s>0){
        if(s>1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }else if (p == 1 && s==0)
    {
        cout << "YES" << endl;
    }else if(p==0 && s==0){
        cout << "NO" << endl;
    }

    return 0;
}
