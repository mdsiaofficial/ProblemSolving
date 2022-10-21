#include <stdio.h>

int main() {
    int X;
    double Y;
    scanf("%d %lf", &X, &Y);

    double Avrg_Consumption = (X/Y);

    printf("%.3lf km/l\n", Avrg_Consumption);

	return 0;
}
