#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
using namespace std;


double mySqrt(double x) {
    double r = x;
    double precision = 10e-10;
    
    while (abs(x - r * r) > precision) {
        r = (r + x / r) / 2;
    }
    
    return r;
}

int main()
{

    int t;

    cin >> t;
    for (int i = 0; i < t; i++){
        string time;
        cin >> time;

        //string th = time[0] + time[1];
        string th = time.substr(0, 2);
        string tm = time.substr(2, 3);
        int hh = stoi(th);
        int mm = stoi(tm);
        int pp = 9 * 60;
        int totalm = (hh * 60) + mm;
        int difm = totalm - pp;
        //int hh = (int)time[0] + (int)time[1];
        //int hh = stoi(th);
        //int mm = time[2] + time[3];
        //cout << th << " " << tm;

        int entry = (difm / 5) * 8;
        int out = (difm / 15) * 8;
        int people = entry - out;

        cout << people << endl;
    }

    return 0;
}