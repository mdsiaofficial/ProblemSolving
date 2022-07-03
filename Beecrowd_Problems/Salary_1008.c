#include <stdio.h>

int main() {
    
    int EmNum, hour;
    float perhour;

    scanf("%d %d %f", &EmNum, &hour, &perhour);

    float salary = hour*perhour;

    printf("NUMBER = %d\n", EmNum);
    printf("SALARY = U$ %f\n", salary);

	return 0;
}