#include <stdio.h>
 
int main(void) {
    
    double a,b,c;

    scanf("%lf%lf%lf", &a,&b,&c);
    
    double del = (b*b)-4*a*c;

    if(del > 0) {

        printf("R1 = %.5lf\nR2 = %.5lf\n");
    }else{

        printf("Impossivel calcular\n");
    }
	return 0;
}