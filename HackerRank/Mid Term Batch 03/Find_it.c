#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    int c=0;
    for(int i=0; i<n; i++){
        if(x==a[i]) c++;
    }
    printf("%d\n", c);
    return 0;
}
