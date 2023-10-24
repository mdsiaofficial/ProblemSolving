#include <iostream>
using namespace std;

// A function to count the number of pairs that satisfy the condition
int countPairs (int arr [], int n, int p, int k) {
  // Initialize the count to zero
  int count = 0;

  // Loop through all possible pairs of indices
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      // Calculate the expression for the pair
      int expr = (arr [i] + arr [j]) * (arr [i] * arr [i] + arr [j] * arr [j]);

      // Check if the expression is equal to k modulo p
      if (expr % p == k) {
        // Increment the count
        count++;
      }
    }
  }

  // Return the count
  return count;
}

// The main function
int main () {
  // Read the input
  int n, p, k;
  cin >> n >> p >> k;
  int arr [n];
  for (int i = 0; i < n; i++) {
    cin >> arr [i];
  }

  // Call the function and print the output
  cout << countPairs (arr, n, p, k) << endl;

  // Return 0 to indicate successful termination
  return 0;
}
