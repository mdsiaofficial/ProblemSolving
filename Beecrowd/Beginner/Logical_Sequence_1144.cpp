#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (long long i = 1; i <= n; i++){
        cout << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;
        cout << i << " " << (i*i)+1 << " " << (i*i*i)+1 << endl;
        
    }

    return 0;
}
