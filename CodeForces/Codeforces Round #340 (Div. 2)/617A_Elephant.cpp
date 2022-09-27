#include<bits/stdc++.h>
using namespace std;
int main(){
    long long d;
    cin>>d;

    if(d%5==0){
        cout<<d/5<<endl;
    }else if(d%4==0){
        cout<<d/4<<endl;
    }else if(d%3==0){
        cout<<d/3<<endl;
    }else if(d%2==0){
        cout<<d/2<<endl;
    }else{
        cout<<d<<endl;
    }


    
    return 0;
}