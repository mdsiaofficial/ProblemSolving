#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    if(a==b){
        cout << a << endl;
    }else{

        if(a>b){
            cout << a << endl;
        }else{
            cout << b << endl;
        }
    }

    return 0;
}
