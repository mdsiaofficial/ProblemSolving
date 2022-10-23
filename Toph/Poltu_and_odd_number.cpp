#include <iostream>
//#include <iomanip>
//#include <cmath>
using namespace std;

// unsolved

int main()
{
    long long n;
    cin >> n;
    int c = 1;
    while (n!=0)
    {
        long long a, b;
        long long odd_sum = 0;

        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            if (j % 2 != 0)
            {
                odd_sum += j;
                
            }
        }
        cout << "Case " << c << ": " << odd_sum << endl;
        n--;
        c++;
    }


/*     
    for (int i = 1; i <=n; i++)
    {
        long long a, b;
        long long odd_sum=0;


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
  */   


    return 0;
}
