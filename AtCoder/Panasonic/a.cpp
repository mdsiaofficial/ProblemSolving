#include <iostream>
#include <string>
using namespace std;

int main(){
    

    int n;
    cin>>n;

    

    int fn= n * (n-1);

    
    if(n==0){
        cout<<"1"<<endl;
    }else if(n>0){
        cout<<fn<<endl;
    }
    
    return 0;
    
}
