#include <stdio.h>

int main() {
    
    int EmNum, hour;
    float perhour;

    scanf("%d %d %f", &EmNum, &hour, &perhour);
    //hour = (float)hour;

    float salary = (float)hour*perhour;
    //float salary = hour*perhour;
    //printf("%d", hour);

    printf("NUMBER = %d\n", EmNum);
    printf("SALARY = U$ %.2f\n", salary);

	return 0;
}