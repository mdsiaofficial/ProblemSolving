#include <iostream>
#include <cmath> //maths er function gula korar liga ei library 
using namespace std;
int main()
{
    long int a,b,c;
    long int max, min;
    cin>>a>>b>>c;

    if(a<b && a<c){
        min=a;
        if(b<c){
            max=c;
        }else{
            max=b;
        }
    }else if(b<a && b<c){
        min=b;
        if(a<c){
            max=c;
        }else{
            max=a;
        }
    }else{
        min=c;
        if(a<b){
            max=b;
        }else{
            max=a;
        }
    }
    cout<<min<<" "<<max<<endl;
    return 0;
}