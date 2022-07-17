#include <stdio.h>
#include <math.h>
 
int main(void) {
    
    int N;
    scanf("%d",&N);
    //int factorial
    for(int i=1; i<N; i++){
        int factorial = factorial*i;
    }
    printf("%d\n",factorial);

	return 0;
}