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

int main()
{
	string str;
    getline(cin, str);

    set <char> s;

    int size = str.length();

    for(int i=1; i<size; i+=3){
        if(isalpha(str[i])){
            s.insert(str[i]);
        }
    }

    cout<<s.size();
	return 0;
}