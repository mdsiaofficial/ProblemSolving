#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed << setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;

int main()
{

    int x, y;
    x = 1;
    y = 1;

    if (x == 1)
        cout << "1st Feature." << nl;
    if (y == 1)
        cout << "2nd Feature." << nl;

    int l = 1, u = 2000;
    srand(time(0));
    int m = (rand() % (u - l + 1)) + l;
    int b = rand() % 1000;

    cout << m << nl;
    cout << b << nl;
    return 0;
}
