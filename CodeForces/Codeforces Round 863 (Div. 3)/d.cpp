#include <iostream>
#include <cmath>
using namespace std;

int F(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int a = 1, b = 1;
    for (int i = 2; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        // Find the side length of the square that contains the colored cell
        int m = 1;
        while (m <= n && x > 1 && y > 1) {
            if (x > y) {
                x -= F(n-m+1);
            } else {
                y -= F(n-m);
            }
            m++;
        }

        // Divide the rectangle into Fibonacci rectangles recursively
        bool possible = true;
        int a = n, b = n-m+1, c = m-1;
        while (c > 0) {
            int d = min(a-b, c);
            if (d == 0) {
                possible = false;
                break;
            }
            a = b+d;
            b = a-d;
            c -= d;
        }

        // Check if there are no two squares with the same side length
        if (possible && (a != b || b != 1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
