#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int t;
    int n;
    cin >> t;
    
    
    for (int i = 1; i <= t; i++){
        float total = 0.0;
        cin >> n;
        float x;
        for (int j = 1; i <= n; j++){
            
            cin >> x;
            total = total + x;
        }
        cout << fixed << setprecision(3) <<"Case "<<i<<": "<< (total / (float)n) << endl;
    }
    
    return 0;
}
