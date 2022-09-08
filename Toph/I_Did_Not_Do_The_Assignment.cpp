#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n%(n-1)!=0){
        cout<<"not prime"<<endl;
    }else{
        cout<<"Prime"<<endl;
    }

    return 0;
}