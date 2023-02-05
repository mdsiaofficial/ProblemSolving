#include<iostream>
#define mod 1000000007
using namespace std;

long long binary_exp(long long b, long long p){
    long long r=1;
    while (p)
    {
        if(p%2==0){
            b=b*b;
            p=p/2;
        }else{
            r=r*b;
            p=p-1;
        }
    }
    return r;
}
long long binary_exp_2(long long b, long long p){
    long long r=1;
        
    while (p)
    {
        if(p%2==0){
            b=(b*b)%mod;
            p=p/2;
        }else{
            r=(r*b)%mod;
            p=p-1;
        }
    }
    return r;
}
 
int main(){
    int t;
    cin>>t;
    while (t--){
        long long b;
        long long p;
        cin>>b>>p;
        cout<<binary_exp(b,p)<<endl;
    }
    return 0;
}