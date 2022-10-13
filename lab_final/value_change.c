#include<stdio.h>
int main(){

    int a=5, b=3, c, d;
    c = a-b;
    d = c-a;
    b = d+a-c;
    a = b-c+b;

    printf("The values are:\n a = %d \n b = %d \n c = %d \n d = %d \n",a,b,c,d);

    return 0;
}