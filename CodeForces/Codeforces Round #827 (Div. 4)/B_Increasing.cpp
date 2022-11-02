#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>


#define ll long long
#define pi 3.14159
#define sp(n) setprecision(int (n))
#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;
int main(){

    int n;
    cin >> n;
    for (int i = 0; i <n; i++){
        int tt;
        int c = 0;
        for (int j = 0; j < tt; j++){
            
            int arrr[tt];
            cin >> arrr[j];
            
            int test = arrr[0];
            if(arrr[j]==test){
                c++;
            }
        }

        if(c>0){
            cout << "NO" << endl;

        }else{
            cout << "YES" << endl;
        }
            
    }
    
    return 0;
}
