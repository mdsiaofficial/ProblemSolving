#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))

using namespace std;

int main(){

    long long int h, m;
    while (scanf("%lld%lld", &h, &m)!=EOF)
    {
        printf("%lld\n", abs(h-m));
    }
    return 0;
}