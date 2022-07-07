#include<iostream>
//#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision

using namespace std;

int main(){

    int time, avrg_speed;

    cin>>time>>avrg_speed;
    //scanf("%d %d", &time, & avrg_speed);

    float distance= (float)time*(float)avrg_speed;

    float fuelperkm = 0.0833333333;

    float fuelspent = distance*fuelperkm;
    //printf("%.3f\n", fuelspent);
    cout<<fixed<<setprecision(3) <<fuelspent<< endl;
    return 0;
}