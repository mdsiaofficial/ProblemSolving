#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    for (int i = 1; i < n; i++)
    {   
        int a;
        cin>>a;

        if(a==0){
            cout<<"NULL"<<endl;

        }else if(n%2==0){
            if(n>0){
                cout<<"EVEN POSITIVE"<<endl;
            }else{
                cout<<"EVEN NEGATIVE"<<endl;
            }
        }else if(n%2!=0){

            if(n>0){
                cout<<"ODD POSITIVE"<<endl;
            }else{
                cout<<"ODD NEGATIVE"<<endl;
            }
        }
        /* code */
    }
    
    return 0;
}
