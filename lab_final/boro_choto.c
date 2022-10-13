#include<stdio.h>
int main(){

    int number1, number2;
    printf("Input two number: ");

    scanf("%d%d", &number1, number2);
    // 2 ta number input nilam
    
    printf("\nBoro: %d\nChoto: \n", (number1>number2));
    
    return 0;
}