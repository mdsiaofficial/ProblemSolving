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

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
// a b c d e f g h i j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z


// solved //

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
        // vector<int>number;

        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr + n);
        // for(int i=0; i<n; i++){
        //     cout<<arr[i];
        // }

        int beauty=0;
        for(int i=1; i<n; i++){
            beauty = (arr[i]-arr[i-1]) + beauty;
        }

        cout<<beauty<<nl;
    }

    return 0;
}