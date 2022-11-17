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

    int x, z, y, m;
    cin >> x >> z >> y >> m;
    int totalprice = x * z;
    int discount = y * m;
    int minprice = totalprice - discount;

    cout << minprice << endl;
    return 0;
}
