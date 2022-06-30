#include <stdio.h>


int main(){
    /*
    printf("Hello, world!\n");
    */

    /*
    printf("int: %ld \n", sizeof(int));
    printf("float: %ld \n", sizeof(float));
    printf("double: %ld \n", sizeof(double));
    printf("char: %ld \n\n", sizeof(char));

    printf("int: %d \n", sizeof(int));
    printf("float: %d \n", sizeof(float));
    printf("double: %d \n", sizeof(double));
    printf("char: %d \n", sizeof(char));
    */

    /*
    printf("Input: 2");
    char a = getchar();
    printf("Your input: %c", a);
    */

/*
    printf("Input: ");
    char a[100];
    gets(a);
    printf("Your input: %s", a);
    */

/*
    int num1, num2;
    printf("Input: ");
    scanf("%d %d", &num1, &num2);
    printf("Your input: %d , %d", num1, num2);
    printf("\nSum: %d", num1+num2);
    */

/*
    printf("Input: ");
    char a = getchar();
    printf("Your input: ");\
    putchar(a);
 */


/*
    printf("Input: ");
    char a[100];
    gets(a);
    printf("Your input: ");
    puts(a);
 */


    int a, b;
    float c, d;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    int sum1 = a+b;
    int sub1 = a-b;

    float sum2 = c+d;
    float sub2 = c-d;

    printf("%d %d\n", sum1, sub1);
    printf("%0.1f %0.1f", sum2, sub2);


    return 0;
}
