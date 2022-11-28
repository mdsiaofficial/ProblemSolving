#include <bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>
#include <string>

#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))

using namespace std;

int poweroftwo(int n){
    int i;
    for(i=0;i<n;i++){
        int j;
        scanf("%d",&j);
        int count=0;
        while(j>0){
            count += j & 1;
            j >>= 1;
        }
        if(count == 1){
            printf("True\n");
        }
        else{
            printf("False\n");
        }
    }
    return 0;
}
//
//
//
//
//
int main(){
    int n;
    scanf("%d",&n);
    poweroftwo(n);
    return 0;
}