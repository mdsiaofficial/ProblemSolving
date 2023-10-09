#include <iostream>
#include <vector>
using namespace std;

vector<int> find_triplet(int n) {
    if (n < 3) {
        return vector<int>();
    }

    // Try to find a triplet that sums to n and none of the numbers are divisible by 3
    for (int x = 1; x < n - 1; ++x) {
        for (int y = 1; y < n - x; ++y) {
            int z = n - x - y;
            if (x % 3 != 0 && y % 3 != 0 && z % 3 != 0 && x != y && x != z && y != z) {
                return {x, y, z};
            }
        }
    }
    return vector<int>();
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> triplet = find_triplet(n);

        if (!triplet.empty()) {
            cout << "YES" << endl;
            for (int j : triplet) {
                cout << j << ' ';
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
