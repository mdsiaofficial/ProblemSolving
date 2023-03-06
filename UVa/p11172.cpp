#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))

using namespace std;

int main(){
    
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        int a,b;
        scanf("%d %d", &a, &b);
        if(a>b){
            printf(">\n");
        }else if(a<b){
            printf("<\n");
        }else{
            printf("=\n");
        }
    }

    return 0;
}