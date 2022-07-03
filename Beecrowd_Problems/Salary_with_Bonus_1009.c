#include <stdio.h>

int main() {
    
    char name[100];
    double salary, sales;

    scanf("%s %lf %lf", name, &salary, &sales);
    double bonus = (sales*15)/100;
    double total =  salary+bonus;

    printf("TOTAL = R$ %d\n", total);


	return 0;
}