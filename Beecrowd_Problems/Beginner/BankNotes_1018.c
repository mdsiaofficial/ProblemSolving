#include <stdio.h>
 
int main(void) {
    
    int notes, aux;

    scanf("%d", &notes);

    printf("%d\n", notes);
    printf("%d nota(s) de R$ 100,00\n", notes/100);
    aux = (notes%100);


    printf("%d nota(s) de R$ 50,00\n", aux/50);
    aux = (aux%50);

    printf("%d nota(s) de R$ 20,00\n", aux/20);                                                                                                                        
    aux = (aux%20);

    printf("%d nota(s) de R$ 10,00\n", aux/10);
    aux = (aux%10);

    printf("%d nota(s) de R$ 5,00\n", aux/5);
    aux = (aux%5);

    printf("%d nota(s) de R$ 2,00\n", aux/2);
    aux = (aux%2);

    printf("%d nota(s) de R$ 1,00\n", aux/1);

/* 
	int a;
    scanf("%d",&a);
 
    int b=a/100;
    int c=a%100;
    printf("%d nota(s) de R$ 100,00\n",b);
 
    int d = c/50;
    int e = c%50;
    printf("%d nota(s) de R$ 50,00\n",d);
 
    int f = e/20;
    int g = e%20;
    printf("%d nota(s) de R$ 20,00\n",f);
 
    int h = g/10;
    int i = g%10;
    printf("%d nota(s) de R$ 10,00\n",h);
 
    int j = i/5;
    int k = i%5;
    printf("%d nota(s) de R$ 5,00\n",j);
 
 
    int l = k/2;
    int m = k%2;
    printf("%d nota(s) de R$ 2,00\n",l);
 
    int n = m/1;
    int o = m%1;
    printf("%d nota(s) de R$ 1,00\n",n);
 
  */
	return 0;
}