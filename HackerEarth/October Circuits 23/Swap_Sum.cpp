#include <iostream>
#include <algorithm>
using namespace std;

// A function to find the maximum sum of A after at most K swaps
int maxSum(int A[], int B[], int N, int K) {
    // Sort both arrays in descending order
    sort(A, A + N, greater<int>());
    sort(B, B + N, greater<int>());

    // Initialize the sum of A
    int sum = 0;

    // Iterate over the arrays
    for (int i = 0; i < N; i++) {
        // If A[i] is smaller than B[i] and we have swaps left
        if (A[i] < B[i] && K > 0) {
            // Swap A[i] and B[i]
            swap(A[i], B[i]);
            // Decrease the number of swaps
            K--;
        }
        // Add A[i] to the sum
        sum += A[i];
    }

    // Return the sum
    return sum;
}

int main() {
    // Read the number of test cases
    int T;
    cin >> T;

    // Loop over the test cases
    while (T--) {
        // Read N and K
        int N, K;
        cin >> N >> K;

        // Declare the arrays
        int A[N], B[N];

        // Read the elements of A
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Read the elements of B
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }

        // Print the maximum sum of A after at most K swaps
        cout << maxSum(A, B, N, K) << endl;
    }

    return 0;
}
