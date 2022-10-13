/* #include<stdio.h>
int main(){

    int number1, number2;
    printf("Input two number: ");

    scanf("%d%d", &number1, number2);
    // 2 ta number input nilam
    int a=5;
    printf("%d", (a > 0? a: -a));
    //printf("\nBoro: %d\nChoto: \n", (number1>number2? number1:number2), (number1<number2? number1:number2));
    //printf("\n%d", number1>number2);
    return 0;
}

 */


#include<stdio.h>

int main() {

    int a = -5, b = 5;

    printf("%d\n", (a > 0? a: -a));
    printf("%d\n", (b > 0? b: -b));

    return 0;

}