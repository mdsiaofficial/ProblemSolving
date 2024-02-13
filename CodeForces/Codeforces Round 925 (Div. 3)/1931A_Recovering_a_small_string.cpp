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

string smallestEncodedWord(int n) {
    // Convert the encoded number into three letters
    char first = 'a' + (n - 1) / 676; // 676 = 26 * 26
    char second = 'a' + ((n - 1) % 676) / 26;
    char third = 'a' + ((n - 1) % 26);

    // Construct the word using the letters
    string word = "";
    word += first;
    word += second;
    word += third;

    return word;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Encoded word
        
        // Output the lexicographically smallest word
        cout << smallestEncodedWord(n) << endl;
    }

    return 0;
}