#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <numeric>

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

class Solution {
public:

    string findLatestTime(string s) {
        
            
        bool flag = true;
        for(int i = 0; i < 5; i++){
            if(s[i] == '?') {
                flag = false;
                break;
            }
        }
        if(flag) return s;
        if(s[0] == '?' && s[1] == '?' && s[3] == '?' && s[4] == '?') return "11:59";
        if(s[0] == '?' && s[1] == '?' && s[3] != '?' && s[4] != '?'){
            s[0] = '1';
            s[1] = '1';
        }
        if(s[0] != '?' && s[1] != '?' && s[3] == '?' && s[4] == '?'){
            s[3] = '5';
            s[4] = '9';
        }
        if(s[0] == '?' && (s[1] < '2' || s[1] == '?')) s[0] = '1';
        if(s[0] == '?' && s[1] > '1') s[0] = '0';
        if(s[1] == '?' && s[0] == '0') s[1] = '9';
        if(s[1] == '?' && s[0] == '1') s[1] = '1';
        if(s[3] == '?') s[3] = '5';
        if(s[4] == '?') s[4] = '9';
        
        return s;
    }

};



int main() {
    Solution s;

    
    string ss = "?1:?6";
    if (ss[0] == '0' && ss[1] == '?'){ ss[1] = '9';}
    if (ss[0] == '1' && ss[1] == '?'){ ss[1] = '1';}
    if (ss[0] == '?' && ss[1] == '1'){ ss[0] = '1';}
    if (ss[0] == '?' && ss[1] == '?'){ ss[0] = '1'; ss[1] = '1';}
    if (ss[3] == '?'){ ss[3] = '5';}
    if (ss[4] == '?'){ ss[4] = '9';}
    if (ss[3] == '?' && ss[4] == '?'){ ss[3] = '5'; ss[4] = '9';}

    cout << ss;

    return 0;
}