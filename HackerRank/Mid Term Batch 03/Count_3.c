#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    int c[26] = {0};
    int i, index;

    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        index = str[i] - 'a';
        c[index]++;
    }

    for (i = 0; i < 26; i++) {
        printf("%c - %d\n", 'a' + i, c[i]);
    }

    return 0;
}
