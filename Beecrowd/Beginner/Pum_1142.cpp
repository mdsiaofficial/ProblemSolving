#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int i, j;
    cin >> n;

    for (i = 0; i <=n; i++)
    {
        for (j = 1; j <=3; j++)
        {
            cout << j << " ";
        }
        cout << "PUM\n";
    }
    
    return 0;
}
