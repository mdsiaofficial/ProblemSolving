#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int B, y;
        cin >> B >> y;

        int participants = 0;
        int problems = 0;

        while (true) {
            int m = problems;
            int cost_of_problems = m * y;
            int cost_of_rounds = (m / 2) * (m / 2) + ((m + 1) / 2) * ((m + 1) / 2);

            if (cost_of_problems + cost_of_rounds <= B) {
                participants = 1 << m; // Equivalent to 2^m
                problems++;
            } else {
                break;
            }
        }

        cout << participants << endl;
    }

    return 0;
}
