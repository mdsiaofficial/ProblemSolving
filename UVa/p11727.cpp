#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int mid;
    for(int i=1; i<=t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b && a>c){
            if(b>c){
                mid=b;
            }else{
                mid=c;
            }
        }else if(b>a && b>c){
            if(a>c){
                mid=a;
            }else{
                mid=c;
            }
        }else{
            if(a>b){
                mid=a;
            }else{
                mid=b;
            }
        }
        cout<<"Case "<<i<<": "<<mid<<endl;
    }
    
    return 0;
}