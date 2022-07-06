#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    
    int distance;
    // Distance between two car
    float perminute = 30/60;
    int time; 
    scanf("%d", &distance);

    time=distance*perminute;

    printf("%d minutos", time);

    return 0;
}