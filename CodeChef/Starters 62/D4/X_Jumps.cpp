#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, steps;
        cin >> x >> y;

        if(x%y==0){
            steps = x / y;
            cout << steps << endl;
        }else{
            steps = x / y;
            int temp = x % y;
            /* if(y>temp){
                steps += temp;

            }else{

            } */
            steps += temp;
            cout << steps << endl;
        }

    }
    

    return 0;
}