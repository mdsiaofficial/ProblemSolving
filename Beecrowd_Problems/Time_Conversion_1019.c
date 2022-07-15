#include <stdio.h>
 
int main(void) {

    int N;
    scanf("%d", &N);
    
    int hour = N/3600;
    int L = N%3600;
    int minute = L/60;
    int second = L%60;


    printf("%d:%d:%d",hour,minute,second);
    

	return 0;
}