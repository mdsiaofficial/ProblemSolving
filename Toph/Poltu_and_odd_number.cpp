#include <iostream>
//#include <iomanip>
//#include <cmath>
using namespace std;

// unsolved

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        int a, b;
        int odd_sum=0;


        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            if (j%2!=0)
            {
                odd_sum += j;
            }
            
            
        }
        cout << "Case " << i << ": " << odd_sum << endl;
    }
    
    return 0;
}
