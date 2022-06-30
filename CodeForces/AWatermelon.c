#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int weight;
    scanf("%d", &weight);

    if(weight%2==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    
    return 0;
}