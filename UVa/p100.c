#include <stdio.h>

int func(int a,int b);


int main() {
/*     
    int n;
    scanf("%d", &n);
    while(n!=1){
        printf("%d",n);
        if(n%2==0){
            n=(3*n)+1;
        }else{
            n=n/2;
        }
        
    }
 */

//first algorithm code    
    /*
    int n;
    scanf("%d",&n);

    /*
    for(int i=1; n!=1; i++){
        if(n%2==0){
            n=n/2;
            printf("\n%d",n);

        }else{
            n=3*n+1;
            printf("\n%d",n);
        }
    }
    */
    
    /*
    printf("%d ",n);

    while(n!=1){
        if(n%2==0){
            n=n/2;
            printf("%d ",n);

        }else{
            n=3*n+1;
            printf("%d ",n);
        }
    }
    */

    //printf("Hello");

    /*
    int n;
    scanf("%d",&n);
    printf("\n%d",n);
    if(n=1){
    }else{
        if(n%2==0){
            n=n/2;
            printf("\n%d",n);

        }else{
            n=3*n+1;
            printf("\n%d",n);
        }
    }
    */
    


    int i,j,result;
    while(scanf("%d %d",&i,&j)!=EOF){
        result = func(i , j);
        printf("%d %d %d\n",i,j,result);
    }



    
	return 0;
}

int func(int a,int b){
    int x,count = 1,max =0;
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    while(a <= b){
        x = a;
        while(x != 1){
            if(x % 2 == 0) x = x / 2;
            else x = (3 * x) + 1;
            count++;
            if(x == 1)break;
        }
        if(count > max)max = count;
        count = 1;
        a++;
    }
    return max;
}