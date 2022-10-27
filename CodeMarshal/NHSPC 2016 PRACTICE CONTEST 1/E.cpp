#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;


    for (int i = 1; i <=n; i++){
        long long x;
        cin >> x;
        int divisior;

        for (int j = x; j >= 1; j--){
            if(x%j!=0){
                divisior = j;
                break;
            }else{
                continue;
            }
        }

        cout << "Case " << i << ": " << divisior << endl;
        
    }

    return 0;
}