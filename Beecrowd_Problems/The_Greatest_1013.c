#include <stdio.h>
#include <math.h>

int main() {
    
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    int d = (a+b+ abs (a-b))/2;
    int e = (d+c+ abs (d-c))/2;

    printf("%d eh o maior\n", e);

	return 0;
}
