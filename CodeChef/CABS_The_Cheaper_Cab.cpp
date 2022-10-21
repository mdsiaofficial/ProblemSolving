#include<bits/stdc++.h>
using namespace std;
int main(){
    int count;

    cin>>count;

    for (int i = 1; i <=count; i++)
    {
        /* code */
        int a,b;
        cin>>a>>b;

        if(a<b){
            cout<<"FIRST"<<endl;
        }else if(a>b){
            cout<<"SECOND"<<endl;
        }else{
            cout<<"ANY"<<endl;
        }
    }
    
    return 0;
}