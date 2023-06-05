#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long c=log10(n)+1;
    long long count=0;
    while(n>0){
        long long d = n%10;
        if(d==4 || d==7) count++;
        n=n/10;
    }
    
    (count==c)? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
