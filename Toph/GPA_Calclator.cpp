#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
/* 
    int t;
    double n;
    cin >> t;
    
    double x;
    for (int i = 1; i <= t; i++){
        double total = 0.0;
        cin >> n;
        
        for (int j = 0; i < n; j++){
            
            cin >> x;
            total = total + x;

        }
        
        //cout <<"Case "<<i<<": "<< fixed << setprecision(3)<< (total/n) << endl;
        printf("Case %d: %.3lf\n", i, (total/(double)n));
    }
    
   */


//COPIED

    int t, n;
    double p;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        double sum = 0.0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> p;
            sum += p;

        }
        printf("Case %d: %.3lf\n", i, (sum/(double)n));

    }


  

    // unsigned long long power = pow(10, 10);
    // cout << power;

    return 0;
}
