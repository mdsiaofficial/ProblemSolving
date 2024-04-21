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
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
// a b c d e f g h i j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z
//

// unsolved //

void smallestEncodedWord(int n) {
    int size = 26;
    
    string last = "zzz";
    string first;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                // if the sum of the indices of the characters in the alphabet (i.e. a=0, b=1, ..., z=25) is equal to n,
                // and the sum of these indices plus 3 is also equal to n, then we have found the smallest encoded word
                // that has length n
                if (i + j + k + 3 == n && i + j + k >= 0) {
                    // construct a new string with the characters at position i, j, and k in the alphabet
                    first += char(i + 'a');
                    first += char(j + 'a');
                    first += char(k + 'a');
                    // update last to be the smallest of the current first and last
                    last = min(first, last);
                }
            }
        }
    }
    cout << last << endl;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Encoded word
        
        // Output the lexicographically smallest word
        // cout << smallestEncodedWord(n) << endl;
        smallestEncodedWord(n);
    }
    // string s;
    // s += char(0 + 'a');
    // cout << s;
    return 0;
}