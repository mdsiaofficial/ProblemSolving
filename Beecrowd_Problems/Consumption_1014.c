#include <stdio.h>

int main() {
    int X;
    float Y;
    scanf("%d %f", &X, &Y);

    float Avrg_Consumption = (X/Y);

    printf("%.3f km/l\n", Avrg_Consumption);

	return 0;
}
