#include <stdio.h>
 
int main(void) {
    
    int n;
    scanf("%d",&n);


    if(n!=1){

        if(n%=2){

        n=n/2;
        printf("%d\n",n);

        }else{

        n=(n*3)+1;
        printf("%d\n",n);

        }
    }
    


	return 0;
}