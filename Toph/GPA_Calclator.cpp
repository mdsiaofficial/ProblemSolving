#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int t,n;
    cin >> t>>n;
    
    
    for (int i = 1; i <= t; i++){
        float total = 0;
        for (int j = 1; i <= n; j++){
            float x;
            cin >> x;
            total = total + x;
        }
        cout << fixed << setprecision(3) << total / n << endl;
    }
    
    return 0;
}
