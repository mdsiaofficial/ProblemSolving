#include <iostream>
#include <iomanip> // eidar laigai hoitasilo na :/
using namespace std;

int main() {
    int N, a,b;
    float c, d;
    int e, f;
    cin >> N;
    cin >> a >> b;
    cin >> c >> d;
    cin >> e >> f;
    
    //cout << N << endl;
    cout << a+b << endl ;
    float sum = c+d;
    cout << fixed << setprecision(1) << sum << endl;
    cout << e+f;

    return 0;
}