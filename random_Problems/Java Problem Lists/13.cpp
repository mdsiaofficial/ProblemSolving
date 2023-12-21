#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;


int main() {
    string name;
    cout << "Enter your full name: ";
    getline(cin, name);

    stringstream ss(name);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    for (int i = 0; i < words.size() - 1; i++) {
        cout << words[i][0] << ".";
    }

    cout << words[words.size() - 1] << endl;

    return 0;
}
