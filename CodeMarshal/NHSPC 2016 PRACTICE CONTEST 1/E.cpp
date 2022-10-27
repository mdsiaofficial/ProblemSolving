#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

/* 
    for (int i = 1; i <=n; i++){
        long long x;
        cin >> x;
        int divisior;

        for (int j = 1; j <=x/2; j++)
        {
            if(x%j==0){
                //divisior = x / j;
                cout << "Case " << i << ": " << j << endl;
            }
        }
    }


 */


    for (int i = 1; i <=n; i++){
        long long x;
        cin >> x;
        int divisior;

        for(i = 1; i <= n; i++) {
            if(n % i == 0){
                //int lel = n % i;
                //printf("%d\t\n", i); 
                
                if(i%2!=0){
                    div = i;
                }
                    
            }
            
        }
        
    }



    return 0;
}