#include <stdio.h>
#include <math.h>

int main() {
    double x1,y1,x2,y2;

    scanf("%lf%lf %lf%lf", &x1, &y1, &x2, &y2);
    double dx = (x2-x1);
    double dy = (y2-y1);

    //double dx2 = pow(dx,2);
    // dy2 = pow(dy,2);

    //double distance=sqrt(dx2+dy2);
    double distance=sqrt( pow(dx,2) + pow(dy,2) );

    printf("%.4lf\n", distance);


    return 0;
}