#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> houses(n);
        for (int i = 0; i < n; i++) {
            cin >> houses[i];
        }

        // Initialize an array to store the number of valid houses Labib can go to
        vector<int> validHouses(n, 0);

        // Count the valid houses for each house in the village
        for (int i = 0; i < n; i++) {
            int count = 0;
            if (i > 0 && !isPrime(houses[i - 1])) {
                count++;
            }
            if (i < n - 1 && !isPrime(houses[i + 1])) {
                count++;
            }
            validHouses[i] = count;
        }

        // Process queries
        while (q--) {
            int type, x, y;
            cin >> type;
            if (type == 1) {
                cin >> x;
                cout << validHouses[x - 1] << endl;
            } else {
                cin >> x >> y;
                x--; // Adjust for 0-based indexing
                houses[x] = y;

                // Update validHouses counts for adjacent houses
                if (x > 0) {
                    validHouses[x - 1] = isPrime(houses[x - 1]) ? 0 : 1;
                }
                if (x < n - 1) {
                    validHouses[x + 1] = isPrime(houses[x + 1]) ? 0 : 1;
                }
                cout << validHouses[x] << endl;
            }
        }
    }
    return 0;
}
