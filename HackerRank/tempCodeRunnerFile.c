#include <stdio.h>
#include <math.h>

//#define pi 3.14159

int main(void) {

    const double pi = 3.14159;
    double A, R;
    scanf("%lf", &R);
    //double s=pow(R,2);
    A = pi*pow(R,2);

    printf("%.4lf", A);

	return 0;
}
