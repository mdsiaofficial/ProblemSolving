#include <stdio.h>
 
int main(void) {

    
	int a;
    scanf("%d",&a);
 
    int b=a/100;
    int c=a%100;
    printf("100 tk - %d Remaining %d\n",b,c);
 
    int d = c/50;
    int e = c%50;
    printf("50 tk  - %d Remaining %d\n",d,e);
 
    int f = e/20;
    int g = e%20;
    printf("20 tk note - %d  Remaining: %d\n",f,g);
 
    int h = g/10;
    int i = g%10;
    printf(" 10 tk %d Remaining %d\n",h,i);
 
    int j = i/5;
    int k = i%5;
    printf("5 tk  %d Remaining %d\n",j,k);
 
 
    int l = k/2;
    int m = k%2;
    printf("2 tk - %d  Remaining %d\n",l,m);
 
    int n = m/1;
    int o = m%1;
    printf("1 tk - %d Remaining  %d\n",n,o);
 
 
	return 0;
}
 
