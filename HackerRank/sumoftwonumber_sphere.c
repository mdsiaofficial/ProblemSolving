#include <stdio.h>

int main() {
    int N, a,b;
    float c, d;
    int e, f;
    scanf("%d", &N);
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    scanf("%d %d", &e, &f);
    
    
    printf("%d\n%.1f\n%d", a+b, c+d, e+f);

    return 0;
}