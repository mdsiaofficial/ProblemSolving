#include <stdio.h>
#include <math.h>
 
int main(void) {
	// your code goes here
 
    float notes, aux;
 
    scanf("%f", &notes);
 
    printf("%f\n", notes);
    printf("%f nota(s) de R$ 100,00\n", notes/100);
    //aux = (notes%100);
    aux = remainder (notes,100);
 
    printf("%f nota(s) de R$ 50,00\n", aux/50);
    //aux = (aux%50);
    aux = remainder (notes,50);
 
    printf("%f nota(s) de R$ 20,00\n", aux/20);                                                                                                                        
    //aux = (aux%20);
    aux = remainder (notes,20);
 
    printf("%f nota(s) de R$ 10,00\n", aux/10);
    //aux = (aux%10);
    aux = remainder (notes,10);
 
    printf("%f nota(s) de R$ 5,00\n", aux/5);
    //aux = (aux%5);
    aux = remainder (notes,5);
 
    printf("%f nota(s) de R$ 2,00\n", aux/2);
    //aux = (aux%2);
    aux = remainder (notes,2);
 
    printf("%f nota(s) de R$ 1,00\n", aux/1);
 
 
	return 0;
}