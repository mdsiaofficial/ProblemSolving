#include<bits/stdc++.h>

using namespace std;

int main(){
    
    //float a,b,c,d,e,f;
    
    float num[6];
    //int pos[6];
    float pos=0;
    int count=0;
    int i;
    cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4]>>num[5];

    for(i=0; i<6;i++){
        if(num[i] > 0){
            pos=pos+num[i];
            //cout<<pos<<endl;
            count++;
        }
    }


    //cout<<sizeof(num)<<endl;
    //float avg =pos/count;
    
    cout<<count<<" valores positivos"<<endl;
    //cout<<fixed<<setprecision(1)<<avg<<endl;

    return 0;
}
