#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        vector<int> points = {x1, x2, x3};
        sort(points.begin(), points.end());

        int median = points[1]; // median is the middle element
        int f_a = abs(x1 - median) + abs(x2 - median) + abs(x3 - median);

        cout << f_a << endl;
    }

    return 0;
}