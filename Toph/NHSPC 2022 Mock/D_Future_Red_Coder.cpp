#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int x;
    cin >> x;
    int c = 0;
    for (int i = 1; i < 1000000; i++){

       //int temp = x / i;

        if(x%i==0){
            c++;
        }else if(c>2){
            break;
        }else{
            continue;
        }
    }
    
    if(c>2){
        cout << "Well done" << endl;
    }else{
        
        cout << "Never give up" << endl;
    }
    return 0;
}
