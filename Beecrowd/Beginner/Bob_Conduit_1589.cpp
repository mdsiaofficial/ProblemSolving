#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (long long i = 1; i <= n; i++){
        long long a, b;
        cin >> a >> b;
        long long full = a + a + b + b;
        cout << full / 2 << endl;
    }

    return 0;
}
