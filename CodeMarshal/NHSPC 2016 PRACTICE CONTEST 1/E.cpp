#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    for (long long i = 1; i <=n; i++){
        long long x;
        cin >> x;
        int div;

        for(long long j = 1; j <= x; j++) {
            if(x % j == 0){
                if(j%2!=0){
                    div = j;
                }

            }

        }
        cout << "Case " << i << ": " << div << endl;

    }

    return 0;
}