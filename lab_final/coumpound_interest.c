#include<stdio.h>
int main(){

    /* 
    A = P(1+(r/n))^nt
    ci = (P(1+(r/n))^nt) - P
    A = amount
    P = principal
    r = rate of interest
    n = number of times interest is compounded per year
    t = time (in years) 
    */
    

    float principal, rate, time, amount, N;

    printf("Enter the value of Principal, Rate and Time and N(interest counts per year): ");
    
    scanf("%f%f%f%f", &principal, &rate, &time, &N);

    int temp = N*time;
    amount = principal*pow((1+(rate/N)), N*time);
    float ci = amount - principal;

    printf("Compound Interest: %f", ci);

    return 0;
    
}