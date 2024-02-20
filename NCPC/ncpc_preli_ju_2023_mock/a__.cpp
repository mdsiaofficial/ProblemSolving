#include <iostream>
#include <cmath>
using namespace std;

// Function to print a branch of the binary tree
void printBranch(int spaces, int bars) {
    for (int i = 0; i < spaces; ++i) {
        cout << " ";
    }
    cout << "o--|";
    for (int i = 0; i < bars; ++i) {
        cout << "__";
    }
    cout << endl;
}

// Main function
int main() {
    // Read the number of test cases
    int T;
    cin >> T;

    // Loop through each test case
    while (T--) {
        // Read the height of the tree
        int n;
        cin >> n;

        // Loop to print each level of the binary tree
        for (int i = 1; i <= n; ++i) {
            int spaces = pow(2, n - i) - 1;
            int bars = pow(2, i - 1);
            printBranch(spaces, bars);
        }

        // Print the trunk of the tree
        for (int i = 0; i < n - 1; ++i) {
            cout << "o--|";
        }
        cout << "o--|" << endl;
    }

    return 0;
}
