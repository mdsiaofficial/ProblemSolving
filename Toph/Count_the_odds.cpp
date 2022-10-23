#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    int a, b;
    cin >> a >> b;
    int c = 0;
    for (int i = a; i <= b; i++)
    {
        if(i%2!=0){
            c++;
            
        }
        
    }
    cout << c << endl;

    return 0;
}
