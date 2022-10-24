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

        }else{
            for (int i = 1; i <x; i++)
            {
                cout << i << " ";
            }
            cout <<x<<endl;
        }

        

        
    }

    return 0;
}
