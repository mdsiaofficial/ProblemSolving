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
        int div;

        for(int j = 1; j <= x; j++) {
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