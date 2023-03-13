#include <stdio.h>
#include <math.h>

int main(){
    double n, m, a;
    scanf("%lf %lf %lf", &n, &m, &a);
    unsigned long long int s=ceil(n/a)*ceil(m/a);
    printf("%.llu", s);

    return 0;
}