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


int main(int argc, char *argv[])
{
    
    // Read the number of test cases
    int t;
    cin >> t;

    while (t--) {
        // Read the position of the rook
        string position;
        cin >> position;

        // Extract the column and row from the input
        char col = position[0];
        char row = position[1];

        // Initialize vectors to store possible moves
        vector<string> moves;

        // Iterate through all possible rows for the given column
        for (char i = '1'; i <= '8'; ++i) {
            if (i != row) {
                moves.push_back(col + string(1, i));
            }
        }

        // Iterate through all possible columns for the given row
        for (char i = 'a'; i <= 'h'; ++i) {
            if (i != col) {
                moves.push_back(string(1, i) + row);
            }
        }

        // Output the moves for the current test case
        for (const auto &move : moves) {
            cout << move << endl;
        }
    }
    
	return 0;
}
