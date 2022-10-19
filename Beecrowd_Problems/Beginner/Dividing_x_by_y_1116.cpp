#include<bits/stdc++.h>
using namespace std;
int main(){

    float x,y;
    int n;

    for(int i=1; i<=n; i++){
        cin>>x>>y;

        if(y==0){
            cout<<"divisao impossivel"<<endl;

        }else{
            float div=x/y;
            cout<<fixed<<setprecision(1)<<div<<endl;
        }
    }


    return 0;
}
