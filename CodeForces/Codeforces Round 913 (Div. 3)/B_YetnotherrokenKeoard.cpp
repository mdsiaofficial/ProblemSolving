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

// unsolved
int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    while (t--) {
        string input;
        //cout << "Enter a string: ";
        cin >> input;

        vector<char> newVector(input.begin(), input.end());

        for (int index = 0; index < newVector.size(); ++index) {
            char data = newVector[index];

            if (data == 'B') {
                for (int i = index - 1; i >= 0; --i) {
                    if (isupper(newVector[i])) {
                        newVector[i] = '\0';
                        newVector[index] = '\0';
                        break;
                    }else{
                        newVector[index] = '\0';
                    }
                }
            } else if (data == 'b') {
                for (int i = index - 1; i >= 0; --i) {
                    if (islower(newVector[i])) {
                        newVector[i] = '\0';
                        newVector[index] = '\0';
                        break;
                    }else{
                        newVector[index] = '\0';
                    }
                }
            }
        }

        for (char ch : newVector) {
            cout << ch;
        }
        cout<<endl;
    }

    return 0;
}