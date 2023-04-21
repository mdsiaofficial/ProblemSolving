#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m1, m2, d;
    scanf("%d%d%d", &m1, &m2, &d);

    // int x = (m1*d+m2-1)/m2;
    int x = (m1*d)/m2;
    printf("%d", x);
    return 0;
}
