#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    int c = a;
    int i, j;
    for (i = a; i <= b; i++)
    {
        for (int j = 1; j <3; j++)
        {
            cout << j << " ";
        }
        cout << j<<endl;
        c = j;
    }
    

    return 0;
}
