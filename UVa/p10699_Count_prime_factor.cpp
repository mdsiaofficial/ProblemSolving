#include<iostream>
using namespace std;

void prime_factorization(int n){
    int fact_count=0;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            fact_count++;
            int c=0;
            while (n%i==0)
            {
                c++;
                n=n/i;
            }
            //cout<<i<<"^"<<c<<" ";
        }
    }
    if(n>1){ 
        fact_count++;
        //cout<<n<<"^"<<1<<endl;
    }
    cout<<fact_count<<endl;
}

int main(){

    //int t;
    //cin>>t;
    int n;
    while (cin>>n)
    {
        //int n;
        //cin>>n;
        if(n==0) break;
        prime_factorization(n);
    }
    return 0;

}