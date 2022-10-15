
#include<stdio.h>
int main(){
/* 
    //int number1, number2;
    //printf("Input two number: ");

    //scanf("%d%d", &number1, number2);
    // 2 ta number input nilam
    int a=5;
    printf("%d", (a > 0? a : --a));
    //printf("\nBoro: %d\nChoto: \n", (number1>number2? number1:number2), (number1<number2? number1:number2));
    //printf("\n%d", number1>number2);
 */




/* 
    int a = -5, b = 5;
    printf("%d\n", (a > 0? a: -a));
    printf("%d\n", (b > 0? b: -b));
*/


/*     int a=5;
    int b=10;
 */
/* 
    int a,b;
    // %d int integer
    // %f float floating point number
    // %lf double long floating point number
    // 
    scanf("%d%d", &a, &b);

    printf("%d %d", ((a>b)&&(a!=b)),((b>a)||(b==a)));

 */

/*     //int a=5, b=3;

    printf("%d %d\n", a+b, a-b);
    printf("\n%d", -a+b);

    printf("\n\n%d %d", a>b, a==b);
 */

    int a=5;
    int b=10;

    printf("%d %d", (a>b)&&(a!=b), !(b>a)||(b==a));

    return 0;
}