/* #include <iostream> 
#include <stdio.h>
using namespace std;
int main() { 
    int i, n; 

    //printf("Enter the number : "); 
    scanf("%d", &n);
    int div;
    printf("\nThe divisors are :\n\n");     
    for(i = 1; i <= n; i++) {
        if(n % i == 0){
            //int lel = n % i;
            //printf("%d\t\n", i); 
            
            if(i%2!=0){
                div = i;
            }
                
        }
            
    }

    cout <<div << endl;
    return 0; 
}


 */
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <=n; i++){
        long long x;
        scanf("%lld", &x);
        int div;
        for(int j = 1; j <= x; j++) {
            if(x % j == 0){
                if(j%2!=0){
                    div = j;
                }
            }
        }
        printf("Case %d: %d\n", i, div);
    }
    return 0;
}


