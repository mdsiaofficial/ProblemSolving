#include<bits/stdc++.h>
using namespace std;
int main(){

    int count;
    cin>>count;
    int vol;
    for (int i = 0; i < count; i++)
    {
        /* code */
        int a,b;
        cin>>a>>b;
        //int vol;
        if(a<b){
            //int j;
            vol=b-a;
            /* for(j=0; a==b; j++){
                a++;
            } 
            cout<<j<<endl;
            */
        }else{
            vol=a-b;
            /* int k;
            for(k=0; a==b; k++){
                a--;
            }
            cout<<k<<endl; */
        }
        cout<<vol<<endl;
    }

    
    
    return 0;
}