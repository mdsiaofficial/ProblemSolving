#include <stdio.h>

int main(void) {

    int X;
    // input value
    scanf("%d", &X);
    
    for(int i=1; i!=X; i++){
        if (i%2!= 0){
            printf("%d", i);
        }
    }

	return 0;
}
