#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>

#define ll long long

using namespace std;
int main(){

    int n;
    float p1001 = 1.50;
    float p1002 = 2.50;
    float p1003 = 3.50;
    float p1004 = 4.50;
    float p1005 = 5.50;

    cin >> n;
    float sum = 0;
    for (int i = 1; i <= n; i++){
        int x, y;
        cin>>x>>y;

        if(x==1001){
            sum = sum + (p1001 * y);
        }else if(x==1002){
            sum =  sum + (p1002 * y);
        }else if(x==1003){
            sum =  sum + (p1003 * y);    
        }else if(x==1004){
            sum =  sum + (p1004 * y);
        }else if(x==1005){
            sum =  sum + (p1005 * y);
        }

    }
    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}
