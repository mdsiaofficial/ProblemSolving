#include <iostream>
#include <string>
using namespace std;

int main(){
    long long a;
    cin>>a;
    //int f;
    //int i=1;

    
    for(int i=a; i>=1; i--){
        a=a*i;
        //a*=i;
    }
/*
    while(i<=a){
        a=a*i;
        i++;
    }
*/
    cout<<a<<endl;
    return 0;
}