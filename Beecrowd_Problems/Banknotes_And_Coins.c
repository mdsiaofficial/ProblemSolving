#include <stdio.h>
#include <math.h>
 
int main(void) {
    
    double notes, aux;

    scanf("%lf", &notes);
/* 
    printf("NOTAS:\n");
    printf("%lf nota(s) de R$ 100,00\n", notes/100);
    //aux = (notes%100);
    aux = remainder(notes,100);

    printf("%lf nota(s) de R$ 50,00\n", aux/50);
    //aux = (aux%50);
    aux = remainder(notes,50);

    printf("%lf nota(s) de R$ 20,00\n", aux/20);                                                                                                                        
    //aux = (aux%20);
    aux = remainder(notes,20);

    printf("%lf nota(s) de R$ 10,00\n", aux/10);
    //aux = (aux%10);
    aux = remainder(notes,10);

    printf("%lf nota(s) de R$ 5,00\n", aux/5);
    //aux = (aux%5);
    aux = remainder(notes,5);

    printf("%lf nota(s) de R$ 2,00\n", aux/2);
    //aux = (aux%2);
    aux = remainder(notes,2);

    printf("MOEDAS:\n");
    printf("%lf nota(s) de R$ 1,00\n", aux/1);
 */

    //aux=notes%100.0;
    aux = remainder(notes,100.0);
    printf("%lf\n",aux);

    aux=notes/50;


    printf("%lf moeda(s) de R$ 0.50\n", aux);
	return 0;
}