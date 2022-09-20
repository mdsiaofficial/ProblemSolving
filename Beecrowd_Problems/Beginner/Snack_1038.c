#include <stdio.h>
#include <math.h>
int main(){

    int code, amount;

    scanf("%d%d", &code,&amount);
    float x= (float)amount;
    if(code == 1){

        float cachoro = 4.00*x;
        printf("Total: R$ %.2f\n", cachoro);
    }else if(code == 2){

        float salada = 4.50*x;
        printf("Total: R$ %.2f\n", salada);
    }else if(code == 3){

        float bacon = 5.00*x;
        printf("Total: R$ %.2f\n", bacon);
    }else if(code == 4){

        float torrada = 2.00*x;
        printf("Total: R$ %.2f\n", torrada);
    }else if(code == 5){

        float refriger = 1.50*x;
        printf("Total: R$ %.2f\n", refriger);
    }

    return 0;
}