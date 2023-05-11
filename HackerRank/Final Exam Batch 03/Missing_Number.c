#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //long int t;
    unsigned int t;
    scanf("%ld", &t);
    while (t--)
    {
        unsigned int s, a, b, c;
        scanf("%ld %ld %ld %ld", &s, &a, &b, &c);
        printf("%ld\n", s-(a+b+c));
    }  
    return 0;
}