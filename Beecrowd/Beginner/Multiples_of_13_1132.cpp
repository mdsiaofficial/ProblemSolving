#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;

    if(a<b){
        for (int i = a; i <= b; i++)
        {

            if (i % 13 != 0)
            {
                sum += i;
            }
        }
    }else{
        for (int i = b; i <= a; i++)
        {

            if (i % 13 != 0)
            {
                sum += i;
            }
        }
    }
    
    cout << sum << endl;


    return 0;
}
