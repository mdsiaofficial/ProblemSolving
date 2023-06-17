#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the greatest common divisor (GCD)
long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find the minimum non-negative integer x
int findMinNonNegative(vector<long long>& arr) {
    long long gcdValue = arr[0];  // Initialize gcdValue with the first element

    // Calculate the gcd of all elements in the array
    for (int i = 1; i < arr.size(); i++) {
        gcdValue = gcd(gcdValue, arr[i]);
    }

    // If the gcd is already 1, return 0
    if (gcdValue == 1)
        return 0;

    // Iterate through all prime numbers and find the smallest x
    for (int i = 2; i <= 100; i++) {
        if (gcd(gcdValue, i) == 1)
            return i;
    }

    return -1;  // If no such x is found
}

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Length of the array

        vector<long long> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];  // Input array elements
        }

        int result = findMinNonNegative(arr);
        cout << result << endl;
    }

    return 0;
}
