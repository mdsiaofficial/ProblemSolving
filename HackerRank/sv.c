#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x;
    float num;
    char text[20];
    scanf("%d %*f %s", &x, &num, text);
    printf("%d %f %s", x, num, text);
    return 0;
}