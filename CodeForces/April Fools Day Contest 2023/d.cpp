#include <iostream>
#include <set>
using namespace std;

// Recursive function to compute the next term in the sequence
int f(int n) {
    if (n % 2 == 0) {
        return n / 2;
    } else {
        return 2 * n * n * n + 1;
    }
}

int main() {
    long long k;
    cin >> k;
    set<int> seen; // set to keep track of seen terms

    // Try different values of n until we find one that works
    for (int n = 2; n <= 1000; n++) {
        seen.clear(); // clear set for each value of n
        int term = n;
        seen.insert(term); // insert first term
        bool found = true;
        for (long long i = 1; i <= k; i++) {
            term = f(term);
            if (term == 1 || seen.count(term) > 0) {
                found = false;
                break;
            }
            seen.insert(term);
        }
        if (found) {
            cout << n << endl;
            return 0;
        }
    }

    return 0;
}