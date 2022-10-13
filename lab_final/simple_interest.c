#include<stdio.h>
int main(){

    float principal, rate, time, interest;

    scanf("%f%f%f", &principal, &rate, &time);
    // input nilam: muldhon, munafar har , somoy ( year )

    interest = principal * rate * time;
    // sadharon munafa er sutro = muldhon * munafar har * somoy

    printf("Simple Interest: %f", interest);
    
    return 0;
}