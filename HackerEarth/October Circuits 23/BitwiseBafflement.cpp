#include <iostream>
using namespace std;

// A function to count the number of set bits in an integer
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

// A function to check if the number of set bits is odd
bool isOdd(int n) {
    return countSetBits(n) % 2 == 1;
}

// A function to check if the number of set bits is even
bool isEven(int n) {
    return countSetBits(n) % 2 == 0;
}

int main() {
    int t; // The number of test cases[^1^][1]
    cin >> t;
    while (t--) {
        int n; // The size of the array[^2^][2]
        cin >> n;
        int a[n]; // The array elements
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = 0; // The answer to the problem
        for (int i = 0; i < n; i++) {
            int and_val = a[i]; // The bitwise AND of the subarray
            int xor_val = a[i]; // The bitwise XOR of the subarray
            for (int j = i; j < n; j++) {
                if (i != j) {
                    and_val &= a[j]; // Update the AND value
                    xor_val ^= a[j]; // Update the XOR value
                }
                if (isOdd(and_val) && isEven(xor_val)) {
                    ans++; // Increment the answer if the condition is satisfied
                }
            }
        }
        cout << ans << endl; // Print the answer for this test case
    }
    return 0;
}
