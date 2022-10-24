#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    int c = a;
    for (int i = c; i <= b; i++)
    {
        for (int i = 1; i <3; i++)
        {
            cout << i << " ";
        }
        cout << i<<endl;
        c = i;
    }
    

    return 0;
}
