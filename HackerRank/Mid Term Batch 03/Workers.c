#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m1, m2, d;
    scanf("%d%d%d", &m1, &m2, &d);

    int x = (d/m1)*m2;
    printf("%d", x);
    return 0;
}
