
#include<bits/stdc++.h>
using namespace std;
// Print the sum of all odd numbers between X and Y.

int main()
{


 // solution 1;
    //int count;
    //cin>>count;
    int i;
    for (; i; i++)
    {

        int a, b;
        cin >> a >> b;
        int sum = 0;

        if(a<=0) break;
        if(b<=0) break;

        if (a < b)
        {
            for (int i = a; i <= b; i++)
            {
                cout << i << " ";
                sum = sum + i;
            }
        }
        else
        {
            for (int i = b; i <= a; i++)
            {
                cout << i << " ";
                sum = sum + i;
            }
        }
        /* if (a > 0 && b > 0)
        {
            if (a < b)
            {
                for (int i = a; i <= b; i++)
                {
                    cout << i << " ";
                    sum = sum + i;
                }
            }
            else
            {
                for (int i = b; i <= a; i++)
                {
                    cout << i << " ";
                    sum = sum + i;
                }
            }
        }
 */
        cout << "Sum=" << sum << endl;

    }
    



/* 
    // solution 2 ;
    int n;
    int x, y, aux;
    int sum;
    
    while(true){
                
        cin >> x;
        cin >> y;
        if(x <= 0) break;
        if(y <= 0) break;
        
        if(x > y){
                aux = x;
                x = y;
                y = aux;
        }
        sum = 0;
        for(int i = x; i <= y; i++){
                cout << i << " ";
                sum += i;
        }
        cout << "Sum=" << sum << endl;
    }


 */

    return 0;
}
