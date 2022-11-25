#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Solved 

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        int x, y;
        cin >> x >> y;

        int odds[y];
        int sum = 0;
        if(x%2==0){
            x++;
        }

        for(int i=0; i<y; i++){

            odds[i]=x;
            x=x+2;
            
        }

        for(int i=0; i<y; i++){

            sum = sum + odds[i];
            
        }


        // int sum=0;
        // int c = 0;
        // int j = x;

        // for (int j = x; j <= y; j++){
        //     if(j%2!=0){
        //         sum =sum + j;
        //     }
        // }

        // while (c<=y)
        // {
        //     if(j%2!=0){
        //         sum =sum + j;
        //         c++;
        //     }
            
        //     j++;
        // }
        
/*         if(x%2==0){
            x++;

            while (true)
            {
                sum = sum + x;
                x = x + 2;

                if(c==y){
                    break;
                }
            }

        }else{

            while (true)
            {
                sum = sum + x;
                x = x + 2;

                if(c==y){
                    break;
                }
            }
        
        }
 */
        
        

        cout << sum << endl;
    }



    return 0;
}
