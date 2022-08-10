#include <stdio.h>
#include <math.h>
int main(void) {
    
    double a,b,c;

    scanf("%lf%lf%lf", &a,&b,&c);

    double del = (b*b)-4*a*c;

    if(del > 0) {
        double r1= (sqrt(del)-b)/2*a;
        double r2= (-sqrt(del)-b)/2*a;
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }else{

        printf("Impossivel calcular\n");
    }
	return 0;
}