#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 90000007
#define fs(n) fixed << setprecision(int(n))
#define s(n) setprecision(int(n))
using namespace std;


// Function to find the minimum length of segment needed to paint to cover all black cells
int min_paint_segment(int n, string s) {
    int left_black = s.find('B');  // Find the first black cell from the left
    int right_black = s.rfind('B');  // Find the first black cell from the right
    
    // Calculate the length of the segment between the first and last black cell
    int min_segment_length = right_black - left_black + 1;
    
    return min_segment_length;
}

int main() {
    // Read the number of test cases
    int t;
    cin >> t;
    
    // Iterate through each test case
    for (int i = 0; i < t; ++i) {
        // Read the length of the strip and the strip itself
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        // Find and output the minimum length of segment needed to paint
        cout << min_paint_segment(n, s) << endl;
    }
    
    return 0;
}