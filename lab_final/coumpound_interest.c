#include<stdio.h>
#include<math.h>
int main(){

    /* 

    A = P(1+(r/100))^t
    
    A = amount
    P = principal
    r = rate of interest
    n = number of times interest is compounded per year
    t = time (in years) 
    */
    

    float principal, rate, time, amount;

    printf("Enter the value of Principal, Rate and Time and N(interest counts per year): ");
    
    scanf("%f%f%f", &principal, &rate, &time);

    amount = principal*pow((1+(rate/100)),time);

    printf("Compound Interest: %f", amount);

    return 0;
    
}