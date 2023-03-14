#include <stdio.h>
#include <string.h>

int main()

{
    int n, len, p, i, j;
    char s[1001];
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%s", s);
        len = strlen(s);

        if(len>10){
            printf("%c%d%c\n", s[0],len-2, s[len-1]);

        }else{
            printf("%s\n", s);
        }
    }

    return 0;
}
