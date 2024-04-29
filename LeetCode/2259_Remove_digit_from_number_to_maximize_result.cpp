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
class Solution {
public:

    // not approved
    string removeDigit(string number, char digit) {
        vector<string>results;
        for (int i = 0; i < number.size(); i++) {
            if (number[i] == digit) {
                string temp = number;
                temp[i] = '\0';
                results.push_back(temp);
            }
        }

        for (auto x : results) {
            cout << x << nl;
        }

        sort(results.begin(), results.end());
        string res = results[0];
        return res;
    }


    // Approved
    string removeDigit2(string number, char digit) {
        vector<string>results;
        int n = number.size();
        for (int i = 0;i < number.size();i++)
        {
            if (number[i] == digit)
            {
                string temp = number.substr(0, i) + number.substr(i + 1, n);
                results.push_back(temp);
            }

        }

        sort(results.begin(), results.end());
        return results[results.size() - 1];
    }

    // not approved
    string removeDigit3(string number, char digit) {
        string rr = "";
        for (int i = 0; i < number.size(); i++) {
            if (number[i] == digit) {
                string temp = number;
                temp[i] = '\0';
                rr = max(rr, temp);
            }
        }
        return rr;
    }

    // approved
    string removeDigit4(string number, char digit) {
        string res = "";
        for (int i = 0; i < number.size(); i++) {
            if (number[i] == digit) {
                string temp = number.substr(0, i) + number.substr(i + 1);
                res = max(res, temp);
            }
        }
        return res;
    }

};
int main() {
    Solution s;
    cout << s.removeDigit2("2858128", '8') << nl;
    // string x= "1231";
    // x[1] = '\0';
    // cout<<x<<nl;

    return 0;
}
