#include <iostream>
#include <climits>
using namespace std;

// function to find the maximum sum of two distinct integers in an array
int max_sum_two_distinct(int arr[], int n) {
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    return largest + second_largest;
}

// main function to process multiple test cases
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << max_sum_two_distinct(arr, n) << endl;
    }
    return 0;
}
