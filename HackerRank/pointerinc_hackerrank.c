#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int pa, pb;
    
    scanf("%d %d",&a,&b);
    pa=a+b;
    pb=abs(a-b);
    printf("%d\n%d", pa, pb);
    
    return 0;
}