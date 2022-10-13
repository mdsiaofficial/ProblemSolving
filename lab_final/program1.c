#include<stdio.h>
int main(){

    int a=5, b=3, c, d;
    c = a-b;
    d = c-a;
    b = d+a-c;
    a = b-c+b;

    printf("The values are:\na= %d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
    
    return 0;
}