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
        int x;
        cin >> x;
        int divisior;
        if(x%2==0){
            divisior = x/2;
        }else{
            divisior = x/3;
        }
        
        
        cout << "Case " << i << ": " << divisior << endl;
        
    }

    return 0;
}