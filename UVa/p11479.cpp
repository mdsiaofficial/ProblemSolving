#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b <= c || a + c <= b || b + c <= a) {
            cout << "Case " << caseNum << ": Invalid" << endl;
        } else if (a == b && b == c) {
            cout << "Case " << caseNum << ": Equilateral" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Case " << caseNum << ": Isosceles" << endl;
        } else {
            cout << "Case " << caseNum << ": Scalene" << endl;
        }
    }

    return 0;
}
