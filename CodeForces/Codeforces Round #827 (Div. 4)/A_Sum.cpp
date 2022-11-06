#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int testcase;
    cin>>testcase;

    for(int i=0; i<testcase; i++){
        int a,b,c;
        cin>>a>>b>>c;

        if(a==(b+c) || b==(a+c) || c==(a+b)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }

    
    
    return 0;

}