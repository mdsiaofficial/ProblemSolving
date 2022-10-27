#include <iostream> 
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