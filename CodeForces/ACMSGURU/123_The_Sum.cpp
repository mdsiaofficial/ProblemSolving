#include <iostream>
#include <vector>
#include <map>
 
using namespace std;

int main() {
    
    int n;
    cin>>n;

    if (n<=0){
        cout<<"0"<<endl;
    }else if(n==1){
        cout<<"1"<<endl;
    }

    long long fibo[n+1];
    fibo[0]=0;
    fibo[1]=1;

    for(int i=2; i<=n; ++i){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }

    long long fiboSum=0;
    for(int i=1; i<=n; ++i){
        fiboSum+=fibo[i];
    }

    cout<<fiboSum<<endl;
    
    return 0;
}