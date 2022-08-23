#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
using namespace std;
int main(){

    int n1,n2,n3;
    cin>>n1>>n2>>n3;


    if(n1<n2 && n1<n3){
        cout<<n1<<endl<<endl;

        if(n2<n3){
            cout<<n2<<endl<<endl;
        }else{
            cout<<n3<<endl<<endl;
        }

    }else if(n2<n1 && n2<n3){
        cout<<n2<<endl<<endl;

        if(n1<n3){
            cout<<n1<<endl<<endl;
        }else{
            cout<<n3<<endl<<endl;
        }

    }else{
        cout<<n3<<endl<<endl;

        if(n1<n2){
            cout<<n1<<endl<<endl;
        }else{
            cout<<n2<<endl<<endl;
        }
    }

    
    cout<<n1<<endl<<n2<<endl<<n3<<endl;

    return 0;
}