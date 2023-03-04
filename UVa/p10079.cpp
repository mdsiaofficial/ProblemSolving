#include<bits/stdc++.h>
int main(){

    while (1)
    {
        long long int n;
        scanf("%d", &n);
        /* 
        if(n<0) break;
        int s=1;
        for(int i=1; i<=n; i++){
            s=s+i;
        } */
        int s=1;
        if(n>=0 && n<=210000000){
            
            for(int i=1; i<=n; i++){
                s=s+i;
            }
        }else{
            break;
        }
        printf("%d\n", s);
    }
    return 0;
}