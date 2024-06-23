#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solve(string s, vector<int>& ind, string c) {
    int n = s.length();
    int m = ind.size();

    // Create a vector to store the updated characters for each index
    vector<char> updated(n, '\0');

    // Iterate through the updates and store them in the updated vector
    for (int i = 0; i < m; ++i) {
        updated[ind[i] - 1] = c[i];
    }

    // Find the first index with no assigned character
    int first_unassigned = 0;
    while (first_unassigned < n && updated[first_unassigned] != '\0') {
        first_unassigned++;
    }

    // Iterate through the alphabet and assign the remaining characters
    char current_char = 'a';
    for (int i = first_unassigned; i < n; ++i) {
        if (updated[i] == '\0') {
            while (current_char <= 'z' && count(updated.begin(), updated.end(), current_char) > 0) {
                current_char++;
            }
            updated[i] = current_char;
        }
    }

    // Build the lexicographically smallest string
    string result = "";
    for (int i = 0; i < n; ++i) {
        result += updated[i];
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> ind(m);
        for (int i = 0; i < m; ++i) {
            cin >> ind[i];
        }

        string c;
        cin >> c;

        string result = solve(s, ind, c);
        cout << result << endl;
    }

    return 0;
}