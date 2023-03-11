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
    
    /*
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

    */


    /* 
    int v,t;
    while(scanf("%d%d", &v, &t)==2){
        printf("%d\n", 2*v*t);
    }
     */

    /*
    long long int h, m;
    while (scanf("%lld%lld", &h, &m)!=EOF)
    {
        printf("%lld\n", abs(h-m));
    }
    */

    /* 
    int t;
    scanf("%d", &t);
    int mid;
    for(int i=1; i<=t; i++)
    {
        int a,b,c;
        scanf("%d%d%d", &a, &b, &c);
        if(a>b && a>c){
            if(b>c){
                mid=b;
            }else{
                mid=c;
            }
        }else if(b>a && b>c){
            if(a>c){
                mid=a;
            }else{
                mid=c;
            }
        }else{
            if(a>b){
                mid=a;
            }else{
                mid=b;
            }
        }

        printf("Case %d: %d\n", i, mid);
    }
     */

/* 
    while (1)
    {
        long long int n;
        scanf("%d", &n);
        if(n<0) break;
        int s=1;
        for(int i=1; i<=n; i++){
            s=s+i;
        }
        printf("%d\n", s);
    }

*/

    int a;
    printf("%d", sizeof(a));
    return 0;
}