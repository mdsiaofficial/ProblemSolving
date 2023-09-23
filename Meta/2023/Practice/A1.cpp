#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; ++i) {
        int S, D, K;
        cin >> S >> D >> K;

        // Calculate the total number of buns, cheese slices, and patties.
        int totalBuns = 2 * (S + D);
        int totalCheese = S + 2 * D;
        int totalPatties = S + 2 * D;

        // Check if it's possible to build a K-decker cheeseburger.
        if (totalBuns >= 2 * K && totalCheese >= K && totalPatties >= K) {
            cout << "Case #" << i << ": YES" << endl;
        } else {
            cout << "Case #" << i << ": NO" << endl;
        }
    }

    return 0;
}
