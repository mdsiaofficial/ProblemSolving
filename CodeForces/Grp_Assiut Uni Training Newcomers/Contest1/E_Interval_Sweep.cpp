#include<bits/stdc++.h>
using namespace std;
int main(){

    //unsolved
    int a,b;
    cin>>a>>b;
    
    if((a-b)==1 || (b-a)==1 || a==b){
        if(a==b){
            cout<<"YES"<<endl;
        }else if(a==0 && b==0){
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
