#include <stdio.h>
#include <math.h>
 
int main(void) {
    
    int N;

    scanf("%d",&N);

    int fact=1;
    
    for(int i=1; i<=N; i++){
        fact = fact*i;
    }
    printf("%d\n",fact);


	return 0;
}