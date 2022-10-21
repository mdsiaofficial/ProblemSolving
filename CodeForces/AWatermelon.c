#include <stdio.h>

int main()

{
    int n;
    scanf("%d", &n);
    if(n <= 2 || n%2 != 0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }


/* 
    int weight;
    scanf("%d", &weight);
    if(weight>=1 && weight<=100){
    
        if(weight%2==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    } 
    */
    
    return 0;
}