#include <stdio.h>
#include <math.h>

int main() {

    int r;
    scanf("%d", &r);

    double volume = (4.0/3.0)*pi*pow(r,3);
    
    printf("VOLUME = %.3f\n", volume);

    return 0;
}