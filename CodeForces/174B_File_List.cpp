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
    string s;
    cin >> s;
    vector<string> v;
    size_t pos = 0;
    while ((pos = s.find('.')) != string::npos) {
        v.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    v.push_back(s);
    int y = 0 < v[0].size() < 9 && 0 < v.back().size() < 4 && v.size() > 1;
    for (int i = 1; i < v.size() - 1; i++) {
        if (v[i].size() < 2 || v[i].size() > 11) y = 0;
    }
    cout << (y ? "YES" : "NO") << "\n";
    if (y < 1) return 0;
    cout << v[0];
    for (int i = 1; i < v.size() - 1; i++) {
        cout << ".";
        if (v[i].size() > 3) {
            cout << v[i].substr(0, 3) << "\n" << v[i].substr(3);
        }
        else {
            cout << v[i][0] << "\n" << v[i].substr(1);
        }
    }
    cout << "." << v.back() << "\n";
    return 0;
}