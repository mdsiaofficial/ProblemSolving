#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
#define ld long double
#define fsp(n) fixed<<setprecision(int(n))
#define sp(n) setprecision(int(n))

using namespace std;

int main() {

/*
    int n;
    cin>>n;

    int a = n / 3;
    int b = n / 3;
    int c = n / 3;
    
    if(n<3){

        cout << "Invalid" << endl;
    }
    else if (n % 3 == 0)
    {

        cout << "Equilateral" << endl;
    }
    else
    {
        cout << "Isosceles" << endl;
    }

*/


    ll n;

    //scanf("%d", &N);
    cin >> n;

    if(N>=3 && N<=1000000){
        if(N%3==0){
            //printf("Equilateral\n");
            cout << "Equilateral\n";
        }
        else
        {
            //printf("Isosceles\n");
            cout << "Isosceles\n";
        }
    }else{
            //printf("Invalid\n");
            cout << "Invalid\n";
    }
    return 0;
}
