#include <stdio.h>
 
int main(void) {

    int n;
    scanf("%d", &n);
    int minute = n/60;

    int hour = minute/60;

    int minute2 = hour%60;
    int sec = minute%60;

    printf("%d:%d:%d",hour,minute2,sec);
    

	return 0;
}