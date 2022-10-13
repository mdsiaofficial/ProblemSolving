#include<stdio.h>
int main(){
    float base, height, area;

    printf("Enter the value of Base and Height: ");
    scanf("%f%f", &base, &height);

    area = (base * height)/2;

    printf("\nArea of Triangle: %f\n", area);
    
    return 0;
}