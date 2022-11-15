#include<bits/stdc++.h>// ei library add korle ar kisu add kora lage nah 
#include <iostream>
#include <iomanip>//this library need to use setprecision
#include <cmath>
#include <string>

#define ll long long
#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define ll long long
#define ld long double
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))

using namespace std;
int main(){

    int t;
    cin>>t;

    for (int i = 0; i < t; i++){

        int x;
        cin >> x;
        int arr[x];
        int sum = 0;
        for (int j = 0; j < x; j++)
        {
            cin >> arr[j];
        }

        for (int l = 0; l < x; l++){
            for (int k = 0; k < count; k++)
            {
                if(abs(arr[l])==abs(arr[k])){
                    arr[l] = 0;
                }
            }
            
        }

        for (int h = 0; h < x;h++){
            sum = sum + arr[h];
        }
        cout << sum << endl;
    }
    return 0;
}

