#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(int n, int m, vector<int>& companies) {
    vector<int> envelopes(m + 1, 0); // Create an array to count the number of letters in each envelope

    for (int i = 0; i < n; i++) {
        envelopes[companies[i]]++; // Increment the count for the corresponding company
    }

    for (int i = 1; i <= m; i++) {
        if (envelopes[i] == 0) {
            return false; // There is a company without a letter, so it's not possible
        }
    }

    return true; // All companies have at least one letter, so it's possible
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> companies(n);
    for (int i = 0; i < n; i++) {
        cin >> companies[i];
    }

    bool possible = isPossible(n, m, companies);

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
