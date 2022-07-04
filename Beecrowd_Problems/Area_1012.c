#include <stdio.h>
#include <math.h>

int main() {
    
    const double pi = 3.14159; //Contant value of pi
    double A, B, C;

    scanf("%lf%lf%lf", &A, &B, &C);

    double Area_Triangle = (1/2)*A*C;
    // area of triangle
    double Area_Circle = pi*pow(C,2);

    double Area_Trapezium = (1/2)*(A+B)*C;

    double Area_Square = pow(B,2);

    double Area_Rectangle = A*B;


    printf("%lf\n", Area_Triangle);
    printf("%lf\n", Area_Circle);
    printf("%lf\n", Area_Trapezium);
    printf("%lf\n", Area_Square);
    printf("%lf\n", Area_Rectangle);

	return 0;
}
