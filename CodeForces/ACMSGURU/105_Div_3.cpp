#include <iostream>

using namespace std;

int main() {
    // Read N from input
    int N;
    cin >> N;

    int count = 0;
    int currentNumber = 0;

    for (int i = 1; i <= N; i++) {
        currentNumber = currentNumber * 10 + i;
        if (currentNumber % 3 == 0) {
            count++;
        }
    }

    // Print the count of numbers divisible by 3
    cout << count << endl;

    return 0;
}
