#include<bits/stdc++.h>
int main(){

    while (1)
    {
        long long int n;
        scanf("%lld", &n);
        /* 
        if(n<0) break;
        int s=1;
        for(int i=1; i<=n; i++){
            s=s+i;
        }
         */
        if(n<0) break;
        int s=((n*(n+1))/2);
        printf("%d\n", s+1);
    }
    return 0;
}