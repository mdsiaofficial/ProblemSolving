#include <stdio.h>
 
int main(void) {


	int a;
    scanf("%d",&a);
 
    int b=a/100;
    int c=a%100;
    printf("%d nota(s) de R$ 100,00\n",b,c);
 
    int d = c/50;
    int e = c%50;
    printf("%d nota(s) de R$ 50,00\n",d,e);
 
    int f = e/20;
    int g = e%20;
    printf("%d nota(s) de R$ 20,00\n",f,g);
 
    int h = g/10;
    int i = g%10;
    printf("%d nota(s) de R$ 10,00\n",h,i);
 
    int j = i/5;
    int k = i%5;
    printf("%d nota(s) de R$ 5,00\n",j,k);
 
 
    int l = k/2;
    int m = k%2;
    printf("%d nota(s) de R$ 2,00\n",l,m);
 
    int n = m/1;
    int o = m%1;
    printf("%d nota(s) de R$ 1,00\n",n,o);
 
 
	return 0;
}
 
