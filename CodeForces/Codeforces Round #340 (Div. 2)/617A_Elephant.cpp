#include<bits/stdc++.h>
using namespace std;
int main(){
    long long d;
    cin>>d;
/* 
    if(d%5==0){
        cout<<d/5<<endl;
    }else if(d%4==0){
        cout<<d/4<<endl;
    }else if(d%3==0){
        cout<<d/3<<endl;
    }else if(d%2==0){
        cout<<d/2<<endl;
    }else{
        cout<<d<<endl;
    }

 */



/* 
    int steps[5]={5,4,3,2,1};
    int c=0;
    for(int i=0;i<5;i++){
        if(d>=steps[i]){
            c=d/steps[i]+c;
            d=d%steps[i];
        }
    }
    cout<<c<<endl;

*/


    int stp=5;
    int ct=0;

    if(d%5==0){
        cout<<d/5<<endl;
    }else{
        cout<<(d/5)+1<<endl;
    }

    
    
    return 0;
}