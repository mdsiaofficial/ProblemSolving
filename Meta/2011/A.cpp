#include <iostream>
#include <cmath>
#include <map>

using namespace std;

// Function to count the number of ways to write X as the sum of two squares
int countWaysToWriteAsSumOfTwoSquares(int X) {
    int count = 0;
    for (int a = 0; a * a <= X; a++) {
        int b = sqrt(X - a * a);
        if (a * a + b * b == X) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;

    for (int caseNumber = 1; caseNumber <= N; caseNumber++) {
        int X;
        cin >> X;
        int ways = countWaysToWriteAsSumOfTwoSquares(X);
        cout << "Case #" << caseNumber << ": " << ways << endl;
    }

    return 0;
}
