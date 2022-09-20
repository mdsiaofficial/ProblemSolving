#include<bits/stdc++.h>

using namespace std;

int main(){
    
    //float a,b,c,d,e,f;
    
    float num[6];
    //int pos[6];
    int pos=0;
    int count=0;
    int i;
    cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4]>>num[5];
/*
    for(i=0; i< sizeof(num);i++){
        if(num[i] > 0){
            pos=pos+num[i];
            count++;
        }
    }
*/

    cout<<sizeof(num)<<endl;

    
    cout<<pos<<" valores positivos"<<endl;
    cout<<pos/count<<endl;

    return 0;
}
