#include <stdio.h>
 
int main(void) {


    int n;
    scanf("%d",&n);
    int year = n/365;
    int L = n%365;
    int month = L/30;
    int day = L%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);
    

	return 0;
}