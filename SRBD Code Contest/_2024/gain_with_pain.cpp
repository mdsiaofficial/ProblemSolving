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


// Expected values for each exercise type
const int back_expected[3] = {2, 3, 10};
const int leg_expected[3] = {2, 3, 10};
const int chest_expected[3] = {2, 3, 10};
const int shoulder_expected[3] = {1, 3, 10};
const int arm_expected[3] = {3, 3, 10};

bool check_exercise(int M, int Q, int R, const int expected[]) {
    return (M == expected[0] && Q == expected[1] && R == expected[2]);
}

void solve() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N; // Number of days
        cin >> N;
        
        bool consistent = true; // Assume consistent unless proven otherwise
        
        for (int i = 0; i < N; ++i) {
            int M, Q, R;
            
            // Check Back exercise
            cin >> M >> Q >> R;
            if (!check_exercise(M, Q, R, back_expected)) {
                consistent = false;
            }
            
            // Check Leg exercise
            cin >> M >> Q >> R;
            if (!check_exercise(M, Q, R, leg_expected)) {
                consistent = false;
            }
            
            // Check Chest exercise
            cin >> M >> Q >> R;
            if (!check_exercise(M, Q, R, chest_expected)) {
                consistent = false;
            }
            
            // Check Shoulder exercise
            cin >> M >> Q >> R;
            if (!check_exercise(M, Q, R, shoulder_expected)) {
                consistent = false;
            }
            
            // Check Arm exercise
            cin >> M >> Q >> R;
            if (!check_exercise(M, Q, R, arm_expected)) {
                consistent = false;
            }
        }
        
        // Output result for the test case
        if (consistent) {
            cout << "Consistent" << endl;
        } else {
            cout << "Inconsistent" << endl;
        }
    }
}



int main() {

  solve();


  return 0;
}