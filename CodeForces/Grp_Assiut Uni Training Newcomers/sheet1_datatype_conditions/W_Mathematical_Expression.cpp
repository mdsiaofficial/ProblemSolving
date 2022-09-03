#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){
    long int a,b,s;
    char x,y;

    cin>>a>>x>>b>>y>>s;
    if(x=='+' && a+b==s){
        cout<<"Yes"<<endl;
    }else if(x=='-' && a-b==s){
        cout<<"Yes"<<endl;
    }else if(x=='*' && a*b==s){
        cout<<"Yes"<<endl;
    }else if(x=='+' && a+b!=s){
        cout<<a+b<<endl;
    }else if(x=='-' && a-b!=s){
        cout<<a-b<<endl;
    }else if(x=='*' && a*b!=s){
        cout<<a*b<<endl;
    }


    return 0;
}