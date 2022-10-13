#include<stdio.h>
int main(){

    float radius;

    scanf("%f", &radius); 
    // input nilam, radius variable e value rakhlam

    float area = 3.1416 * radius * radius;
    // britter khetrofol er sutro = pi * r * r;
    float circumference= 2 * 3.1416 * radius;
    // britter poridhir sutro = 2 * pi * r

    printf("\nArea of a Circle: %f\n", area);
    printf("\nCircumference of a Circle: %f\n", circumference);
    
    return 0;
}