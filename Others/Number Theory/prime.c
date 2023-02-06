#include<stdio.h>

void prime_factorization(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            int c=0;
            while (n%i==0)
            {
                c++;
                n=n/i;
            }
            //cout<<i<<"^"<<c<<" ";
            printf("%d^%d ", i,c);
        }
    }
    if(n>1){
        //cout<<n<<"^"<<1<<endl;
        printf("%d^1\n", n);
    }
    
}
int main(){

    int t;
    //cin>>t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        //cin>>n;
        scanf("%d", &n);
    
        prime_factorization(n);
    }
    return 0;

}