#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int c;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        int x;
        cin >> x;

        if(x%2==0){
            cout << "0" << endl;
        }else{
            cout << "1" << endl;
        }
    }
    

    return 0;
}
