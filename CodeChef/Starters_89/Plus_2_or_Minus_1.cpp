#include <iostream>
#include <unordered_set>
using namespace std;

int countDistinctValues(int moves) {
    unordered_set<int> distinctValues;
    distinctValues.insert(0); // Initial value of X is 0

    // Perform moves
    for (int i = 1; i <= moves; i++) {
        unordered_set<int> tempSet(distinctValues); // Copy current distinct values

        // Increment X by 2 for each distinct value
        for (int val : tempSet) {
            distinctValues.insert(val + 2);
        }

        // Decrement X by 1 for each distinct value
        for (int val : tempSet) {
            distinctValues.insert(val - 1);
        }
    }

    return distinctValues.size();
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int moves;
        cin >> moves;

        int distinctValues = countDistinctValues(moves);
        cout << distinctValues << endl;
    }

    return 0;
}
