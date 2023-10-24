#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// A function to calculate the sum of divisors of a number
int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum;
}

// A function to find the maximum sum of divisors of M distinct numbers from 1 to N[^1^][1][^2^][2]
int maxSumOfDivisors(int N, int M) {
    // Create a vector to store the sum of divisors of each number from 1 to N[^2^][2]
    vector<int> sums(N + 1);
    for (int i = 1; i <= N; i++) {
        sums[i] = sumOfDivisors(i);
    }

    // Sort the vector in descending order
    sort(sums.rbegin(), sums.rend());

    // Pick the first M elements and add them up
    int maxSum = 0;
    for (int i = 0; i < M; i++) {
        maxSum += sums[i];
    }

    // Return the maximum sum
    return maxSum;
}

// The main function
int main() {
    // Read the number of puzzles
    int T;
    cin >> T;

    // Solve each puzzle
    while (T--) {
        // Read the values of N and M
        int N, M;
        cin >> N >> M;

        // Find and print the maximum sum of divisors
        cout << maxSumOfDivisors(N, M) << endl;
    }

    return 0;
}
