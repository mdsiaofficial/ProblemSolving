#include <iostream>
#include <string>
using namespace std;

int main(){
    long long a;
    cin>>a;
    //int f;
    //int i=1;
    long long f=1;
    if(a==0){
        cout<<"No Factorial !!!"<<endl;
    }else{
        for(long long i=1; i<=a; i++){
            f=f*i;
            //a*=i;
        }
        cout<<f<<endl;
    }
/*
    while(i<=a){
        a=a*i;
        i++;
    }
*/
    
    return 0;
}