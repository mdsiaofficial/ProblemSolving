#include<bits/stdc++.h>
using namespace std;
int main(){
    //int a,b,c,d,e;
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    //cin>>a>>b>>c>>d>>e;
    int c=0;
    for(int i=0; i<sizeof(arr); i++){
        if(arr[i]%2==0){
            c++;
        }
    }

    if(arr[0]%2==0){
        c++;
    }else if(arr[1]%2==0){
        c++;
    }else if(arr[2]%2==0){
        c++;
    }else if(arr[3]%2==0){
        c++;
    }else if(arr[4]%2==0){
        c++;
    }

    cout<<c<<" valores pares"<<endl;
    return 0;

}
