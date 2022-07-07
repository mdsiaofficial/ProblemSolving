#include <stdio.h>



int main()
{
    
    int time, avrg_speed;

    scanf("%d %d", &time, & avrg_speed);

    float distance= (float)time*(float)avrg_speed;

    float fuelperkm = 0.0833333333;

    float fuelspent = distance*fuelperkm;
    printf("%.3f\n", fuelspent);

    return 0;
}