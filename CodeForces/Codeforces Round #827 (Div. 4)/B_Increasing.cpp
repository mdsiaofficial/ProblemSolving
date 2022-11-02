#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
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
        long long tt;
        cin >> tt;
        int c = 0;
        for (int j = 0; j < tt; j++){
            
            long long arrr[tt];
            cin >> arrr[j];
            
            long long test = arrr[0];
            if(arrr[j]==test){
                c++;
            }
        }

        if(c>1){
            cout << "NO" << endl;

        }else{
            cout << "YES" << endl;
        }
            
    }
    
    return 0;
}
