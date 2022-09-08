#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n%2=0){
        cout<<"not prime"<<endl;

    }else{
        cout<<"Prime"<<endl;
    }

    cout<<n%(n-1)<<endl;
    return 0;
}