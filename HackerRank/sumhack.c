#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float c, d;
    
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    
    int sum1 = a+b;
    int sub1 = a-b;
    
    float sum2 = c+d;
    float sub2 = c-d;
    
    printf("%d %d\n", sum1, sub1);
    printf("%0.1f %0.1f", sum2, sub2);
    
    return 0;
}