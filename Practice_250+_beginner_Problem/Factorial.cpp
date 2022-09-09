#include <iostream>
#include <string>
using namespace std;

int main(){
    long int a;
    cin>>a;

    for(int i=1; i<=a; i++){
        a=a*i;
    }

    cout<<a<<endl;
    return 0;
}