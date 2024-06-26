#include <iostream>

using namespace std;

int main() {
    // Read N from input
    long long N;
    cin >> N;

    long long count = 0;
    long long currentNumber = 0;

    count = (N/ 3) * 2;
    if (N % 3 == 2) count++;

    // Print the count of numbers divisible by 3
    cout << count << endl;

    return 0;
}
