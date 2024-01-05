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

int main(){
 
	int n, b;
	int a[110];
	cin >> n >> b;
	for(int i = 0; i < n; i++){
        cin >> a[i];
    }

	int x = 0, s = 0;

	for(int i = 0; i < n; i++){
        x = max(x, a[i]);
    }

	for(int i = 0; i < n; i++){
        s += x - a[i];
    }

	if(s > b){
		cout << "-1"<<nl;
		return 0;
	}

	for(int i = 0; i < n; i++){
		cout << fs(6) << x - a[i] + 1.0 * (b - s) / n <<nl;
	}
 
	return 0;
}