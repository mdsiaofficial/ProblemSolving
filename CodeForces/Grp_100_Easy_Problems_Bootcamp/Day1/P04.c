#include <stdio.h>
#include <string.h>

int main() {

    char s[100], m[100];
    scanf("%s%s", s, m);
    strlwr(s);
    strlwr(m);
    printf("%d\n", strcmp(s,m));
    return 0;
}