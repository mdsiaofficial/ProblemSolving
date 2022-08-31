#include <iostream>
#include <cmath> //maths er function gula korar liga ei library 
using namespace std;
int main()
{
    int a,b,x;
    cin>>a>>x>>b;
    cout<<a<<x<<b;
    if(x=='+'){
        cout<<a+b<<endl;

    }else if(x=='-'){
        cout<<a-b<<endl;

    }else if(x=='*'){
        cout<<a*b<<endl;

    }else if(x=='/'){
        cout<<a/b<<endl;

    }

    
    return 0;
}