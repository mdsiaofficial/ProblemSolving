#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    double distance = sqrt(x*x + y*y + z*z);
    cout << fixed<< setprecision(16)<<distance << endl;
    return 0;
}
