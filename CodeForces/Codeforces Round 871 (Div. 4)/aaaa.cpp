#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;

        // Initialize the target string
        string target = "codeforces";

        // Initialize the number of differences to 0
        int diff = 0;

        // Loop through each character in the strings
        for (int j = 0; j < 10; j++) {
            // Check if the characters differ
            if (s[j] != target[j]) {
                // Increment the number of differences
                diff++;
            }
        }

        // Output the number of differences
        cout << diff << endl;
    }

    return 0;
}