#include <iostream>
#include <cmath>
using namespace std;
int countDivisibleBy3(int N) {
    int count = 0;
    int currentNumber = 0;

    for (int i = 1; i <= N; i++) {
        currentNumber = currentNumber * 10 + i;
        if (currentNumber % 3 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int N;
    cin >> N;

    int result = countDivisibleBy3(N);
    cout << result << endl;

    return 0;
}
