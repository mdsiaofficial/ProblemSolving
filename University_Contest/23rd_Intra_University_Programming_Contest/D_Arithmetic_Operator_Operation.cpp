#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    char x;
    cin>>a>>b>>x;
    int cal;
    if(a==0 || b==0){
        cout<<"Invalid"<<endl;
    }else if(x=='+'){
        cal=a+b;
        cout<<a<<" "<<x<<" "<<b<<" = "<<cal<<endl;
    }else if(x=='-'){
        cal=a-b;
        cout<<a<<" "<<x<<" "<<b<<" = "<<cal<<endl;
    }else if(x=='*'){
        cal=a*b;
        cout<<a<<" "<<x<<" "<<b<<" = "<<cal<<endl;
    }else if(x=='/'){
        cal=a/b;
        cout<<a<<" "<<x<<" "<<b<<" = "<<cal<<endl;
    }else if(x=='%'){
        cal=a%b;
        cout<<a<<" "<<x<<" "<<b<<" = "<<cal<<endl;
    }else{
        cout<<"Invalid"<<endl;
    }
    //cout<<a<<" "<<x<<" "<<b<<" = "<<cal<<endl;

    return 0;
}

