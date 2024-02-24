// solved 
#include <math.h>
#include <stdio.h>
int multiply(int number) {

    int count = 0;

// 	  count = (number == 0) ? 1 : log10(number)+1;
    count = log10(abs(number))+1;
    int p = pow(5, count);
    
    return (number*p);

}