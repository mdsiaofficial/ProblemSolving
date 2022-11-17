#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
#define ld long double
#define fsp(n) fixed<<setprecision(int(n))
#define sp(n) setprecision(int(n))

using namespace std;

int main() {

/*
    int t;
    cin>>t;
    char ns[10]={0,1,2,3,4,5,6,7,8,9};
    int nums[10]={6,2,5,5,4,5,6,3,7,6};
    for(int i=0;i<t;i++){
        string number;
        int led=0;
        cin>>number;


        for(int j=0;j<sizeof(number);j++){
            for(int k=0; k<sizeof(nums); k++){
                //string temp1=number[j];
                //int temp = stoi(temp1);
                if (number[j] == ns[k])
                {
                    led = led + nums[k];
                }
                
            }
        }
        cout << led << endl;
    }

*/


    int t;
    cin>t;
    for (int i = 0; i < t;i++){
        string num;
        cin >> num;

        ll leds = 0;

        for (int j = 0; j < sizeof(num); j++){

            if(num[j]=='0'){
                led = led + 6;
            }
            if(num[j]=='1'){
                led = led + 2;
            }
            if(num[j]=='2'){
                led = led + 5;
            }
            if(num[j]=='3'){
                led = led + 5;
            }
            if(num[j]=='4'){
                led = led + 4;
            }
            if(num[j]=='5'){
                led = led + 5;
            }
            if(num[j]=='6'){
                led = led + 6;
            }
            if(num[j]=='7'){
                led = led + 3;
            }
            if(num[j]=='8'){
                led = led + 7;
            }
            if(num[j]=='9'){
                led = led + 6;
            }
            if(num[j]==''){
                break;
            }
        }
        cout << led << endl;
    }

    return 0;
}
