#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    //solved

    //float number1, number2, c=0;
    float x;
    float arr[3];
    int index = 0;
    while (1)
    {
        cin >> x;

        if(x>=0 && x<=10){
            arr[index] = x;
            index++;
        }else{
            cout << "nota invalida" << endl;

        }
        if(index>1){
            break;
        }
    }
    float avrg = (arr[0] + arr[1]) / 2.0;
    cout <<fixed<<setprecision(2)<< "media = " << avrg << endl;


    return 0;
}
