#include <stdio.h>



int main()
{
    
    int time, avrg_speed;

    scanf("%d %d", &time, & avrg_speed);

    float distance= time*avrg_speed;

    float fuelperkm = (1/12);

    float fuelspent = distance*fuelperkm;
    printf("%.3f", fuelspent);
    return 0;
}