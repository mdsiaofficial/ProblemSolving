#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    while(1){
        int x;
        cin >> x;

        if(x==0){
            break;

        }

        for (int i = 1; i < x; i++)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
