#include<stdio.h>
int main(){
    float base, height, area;

    printf("Enter the value of Base and Height: ");
    scanf("%f%f", &base, &height);

    area = (base * height)/2;

    printf("Area of Triangle: %f")
    return 0;
}