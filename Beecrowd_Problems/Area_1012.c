#include <stdio.h>
#include <math.h>

int main() {
    
    const double pi = 3.14159; //Contant value of pi
    double A, B, C;

    scanf("%lf%lf%lf", &A, &B, &C);

    double Area_Triangle = 0.5*A*C;
    // area of triangle
    double Area_Circle = pi*pow(C,2);

    double Area_Trapezium = 0.5*(A+B)*C;

    double Area_Square = pow(B,2);

    double Area_Rectangle = A*B;


    printf("Tri = %lf\n", Area_Triangle);
    printf("Cir = %lf\n", Area_Circle);
    printf("Trape = %lf\n", Area_Trapezium);
    printf("Sqr = %lf\n", Area_Square);
    printf("Rect = %lf\n", Area_Rectangle);

	return 0;
}
