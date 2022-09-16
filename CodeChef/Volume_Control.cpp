#include<bits/stdc++.h>
using namespace std;
int main(){

    int count;

    for (int i = 0; i < count; i++)
    {
        /* code */
        int a,b;
        cin>>a>>b;

        if(a<b){
            for(int j=0; a==b; j++){
                a++;
            }
            cout<<j<<endl;
        }else{
            for(int k=0; a==b; k++){
                a--;
            }
            cout<<k<<endl;
        }
    }
    
    
    return 0;
}