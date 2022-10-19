#include<bits/stdc++.h>
using namespace std;
int main(){

    
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        float x,y;
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
