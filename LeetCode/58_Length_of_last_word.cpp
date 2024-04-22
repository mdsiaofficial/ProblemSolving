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

    int lengthOfLastWord(string s) {
        vector<string>words;
        stringstream fullword(s);
        string w;

        while (fullword>>w)
        {
            words.push_back(w);
        }
        return words[words.size() - 1].length();

    }
};

int main() {
    Solution soln;
    string s = "Hello World";
    cout << soln.lengthOfLastWord(s);

    return 0;
}