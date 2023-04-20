#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    char str[1001];
    scanf("%s", str);
    int lw = 0;
    int up = 0;
    for(int i=0; i<strlen(str); i++){
        if(islower(str[i])) lw++;
        else up++;
    }
    printf("%d %d\n", up, lw);
    return 0;
}
