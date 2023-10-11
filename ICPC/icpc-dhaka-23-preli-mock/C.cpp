#include<stdio.h>
int main(){
    int n,t,a,b,count=0;
    int p[100000];

    scanf("%d",&t);

    for(int i=0; i<t; i++){
        scanf("%d",&n);
        scanf("%d%d",&a,&b);
        for(int j=0; j<n; j++){
            scanf("%d",p[j]);
        }
        int sum=0;
        for(int k=0; k<n; k++){
            for(int l=k+1; l<n; l++){
                sum= p[k]+p[l];
                if(sum>=a && sum<=b){
                    count++;
                }
            }
        }
        printf("Case %d: %d\n",i,count);
    }
    return 0;
}