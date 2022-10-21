#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){

    int a,b;
    char x;
    cin>>a>>x>>b;
    if(x=='>' && a>b){
        cout<<"Right"<<endl;

    }else if(x=='<' && a<b){
        cout<<"Right"<<endl;

    }else if(x=='=' && a==b){
        cout<<"Right"<<endl;

    }else{
        cout<<"Wrong"<<endl;
    }

    return 0;
}