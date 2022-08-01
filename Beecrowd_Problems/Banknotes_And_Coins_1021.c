#include <stdio.h>
#include <math.h>
 
int main(void) {
	// your code goes here
 
    float notes, aux;
    int nnn;

    scanf("%f", &notes);
 
    printf("NOTAS:\n");

    nnn = (int)notes/100;
    
    printf("%d nota(s) de R$ 100,00\n",nnn);
    //printf("%f nota(s) de R$ 100,00\n", notes/100);
    //aux = (notes%100);
    aux = remainder (notes,100);
 

    nnn = (int)aux/50;
    printf("%d nota(s) de R$ 50,00\n", nnn);
    //aux = (aux%50);
    aux = remainder (notes,50);


    nnn = (int)aux/20;
    printf("%d nota(s) de R$ 20,00\n",nnn);                                                                                                                        
    //aux = (aux%20);
    aux = remainder (notes,20);
    
    nnn = (int)aux/10;
    printf("%d nota(s) de R$ 10,00\n", nnn);
    //aux = (aux%10);
    aux = remainder (notes,10);
    

    nnn = (int)aux/5;
    printf("%d nota(s) de R$ 5,00\n", nnn);
    //aux = (aux%5);
    aux = remainder (notes,5);
 
    nnn = (int)aux/2;
    printf("%d nota(s) de R$ 2,00\n", nnn);
    //aux = (aux%2);
    aux = remainder (notes,2);
 
    nnn = (int)aux/1;
    printf("%d nota(s) de R$ 1,00\n", nnn);
 
 
	return 0;
}