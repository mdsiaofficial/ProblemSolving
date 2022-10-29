#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int c = 0;
    for (long long i = 1; i <= 5; i++){
        int x;
        cin >> x;

        if(x==n){
            c++;
        }

    }
    cout << c << endl;
    return 0;
}
