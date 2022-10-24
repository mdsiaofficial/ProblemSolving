#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int i, j;
    cin >> n;
    int c = 1;
    for (i = 0; i <n; i++)
    {
        for (j=c; j <=(c+2); j++)
        {
            cout << j << " ";
            // j++;
        }
        c = j + 1;
        cout << "PUM\n";
        
    }
    
    return 0;
}
