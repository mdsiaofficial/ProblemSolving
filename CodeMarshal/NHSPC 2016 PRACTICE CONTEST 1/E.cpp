#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

/*     for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        for (int j = 1; j <= x; j++){

            if(x%j==0)
        }
    }
 */
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
        int div;

        for(int j = 1; j <= x; j++) {
            if(x % j == 0){
                //int lel = n % j;
                //printf("%d\t\n", j);

                if(j%2!=0){
                    div = j;
                }

            }

        }
        cout << "Case " << i << ": " << div << endl;

    }

        

    return 0;
}