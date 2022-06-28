#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    
    int a, b;
    char *str[]={"one","two","three","four","five","six","seven","eight","nine","odd","even"};

    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    
    for(int n=a; n<=b; n++){
        if(n<=9){
            printf("%s\n", str[n-1]);
        }else{
            printf("%s\n", str[9+(n%2)]);
        }
    }

/*     
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(int n=5; n<10; n++){

        if(n>=1 && n<=9){
            
            if(n==1){
                printf("one");
            }else if(n==2){
                printf("two");
            }else if(n==3){
                printf("three");
            }else if(n==4){
                printf("four");
            }else if(n==5){
                printf("five");
            }else if(n==6){
                printf("six");
            }else if(n==7){
                printf("seven");
            }else if(n==8){
                printf("eight");
            }else if(n==9){
                printf("nine");
            }
        }else{
            if(n%2==0){
                printf("even");

            }else{
                printf("odd");
            }
        }

    }
 */
    return 0;
}