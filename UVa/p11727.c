#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int mid;
    for(int i=1; i<=t; i++)
    {
        int a,b,c;
        scanf("%d%d%d", &a, &b, &c);
        if(a>b && a>c){
            if(b>c){
                mid=b;
            }else{
                mid=c;
            }
        }else if(b>a && b>c){
            if(a>c){
                mid=a;
            }else{
                mid=c;
            }
        }else{
            if(a>b){
                mid=a;
            }else{
                mid=b;
            }
        }
        printf("Case %d: %d\n", i, mid);
    }
    
    return 0;
}