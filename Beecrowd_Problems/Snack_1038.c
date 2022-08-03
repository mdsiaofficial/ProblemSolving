#include <stdio.h>
#include <math.h>
int main(){

    int code, amount;

    scanf("%d%d", &code,&amount);
    float x= (float)amount;
    if(code == 1){

        int cachoro = 4.00*x;
        printf("Total: R$ %d\n", cachoro);
    }else if(code == 2){

        int salada = 4.50*x;
        printf("Total: R$ %d\n", salada);
    }else if(code == 3){

        int bacon = 5.00*x;
        printf("Total: R$ %d\n", bacon);
    }else if(code == 4){

        int torrada = 2.00*x;
        printf("Total: R$ %d\n", torrada);
    }else if(code == 5){

        int refriger = 1.50*x;
        printf("Total: R$ %d\n", refriger);
    }

    return 0;
}