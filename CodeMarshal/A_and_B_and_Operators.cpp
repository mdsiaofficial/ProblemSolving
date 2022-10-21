#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){
    int a,b;
    char x;
    int c;
    
    cin>>c;
    for(int i=1; i<=c; i++){
        cin>>a>>b>>x;
        if(x=='+'){
            cout<<"Case "<<i<<": "<<a+b<<endl;
        }else if(x=='-'){
            cout<<"Case "<<i<<": "<<a-b<<endl;
        }else if(x=='*'){
            cout<<"Case "<<i<<": "<<a*b<<endl;
        }else if(x=='/'){
            cout<<"Case "<<i<<": "<<a/b<<endl;
        }else if(x=='%'){
            cout<<"Case "<<i<<": "<<a%b<<endl;
        }
        
    }

    
    return 0;
}