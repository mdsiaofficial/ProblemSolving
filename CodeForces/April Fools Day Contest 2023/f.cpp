#include<iostream>
using namespace std;

void prime_factorization(int n){
    
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            int c=0;
            while (n%i==0)
            {
                c++;
                n=n/i;
            }
            cout<<i<<"^"<<c<<" ";
        }
    }
    if(n>1) cout<<n<<"^"<<1<<endl;
}
int main(){


    int n;
    cin>>n;
    prime_factorization(n);
    return 0;

}