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

    // Did not submit

int main() {

    int x, tmp, size;
    string s;
    cin >> x;
    for (int i = 0; i < x; ++i)
    {
        tmp = 0;
        cin >> s;
        size = s.length();
        for (int j = 0; j < size; ++j)
        {
            if(s[j] == '0' || s[j] == '9' || s[j] == '6'){
                tmp += 6;
            }else if(s[j] == '1'){
                tmp += 2;
            }else if(s[j] == '2' || s[j] == '3' || s[j] == '5'){
                tmp += 5;
            }else if(s[j] == '4'){
                tmp += 4;
            }else if(s[j] == '7'){
                tmp += 3;
            }else{
                tmp += 7;
            }
        }
        cout << tmp << " leds" << endl;
    }



    return 0;
}
