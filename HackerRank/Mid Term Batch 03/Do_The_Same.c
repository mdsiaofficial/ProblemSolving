#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    int n,k;
    scanf("%d%d", &n, &k);

    for(int i=1; i<=k; i++){
        for(int j=1; j<n; j++){
            printf("%d ", j);
        }
        printf("%d\n", n);
    }
    return 0;
}
