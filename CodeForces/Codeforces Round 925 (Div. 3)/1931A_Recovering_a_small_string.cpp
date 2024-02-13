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
    // The alphabet has 26 letters
    int alphabetSize = 26;
    
    // Determine the positions of each letter in the word
    int pos1 = (n - 1) / (alphabetSize * alphabetSize);
    int pos2 = ((n - 1) / alphabetSize) % alphabetSize;
    int pos3 = (n - 1) % alphabetSize;

    // Construct the word using the positions of the letters
    string word = "";
    word += ('a' + pos1);
    word += ('a' + pos2);
    word += ('a' + pos3);

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