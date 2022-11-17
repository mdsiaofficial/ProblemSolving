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

    int t;
    cin>>t;
    int ns[10]={0,1,2,3,4,5,6,7,8,9};
    int nums[10]={6,2,5,5,4,5,6,3,7,6};
    for(int i=0;i<t;i++){
        string number;
        int led=0;
        cin>>number;


        for(int j=0;j<number.length();j++){
            for(int k=0; j<nums.length(); k++){
                if(number[j]==ns[k]){
                    led = led + nums[k];
                }
            }
        }
    }



    return 0;
}
