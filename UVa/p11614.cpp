#include <iostream>
#include <cmath>
using namespace std;
int calculateRows(long long int ww) {
    // Calculate the number of rows using the quadratic equation
    // n = (sqrt(8 * warriors + 1) - 1) / 2
    return static_cast<int>((std::sqrt(8 * ww + 1) - 1) / 2);
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long int w;
        cin >> w;

        int rows = calculateRows(w);
        cout << rows << endl;
    }

    return 0;
}
