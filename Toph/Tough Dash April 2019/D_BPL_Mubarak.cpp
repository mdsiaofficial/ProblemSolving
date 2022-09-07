#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
#include <cmath>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string bowls;
        cin>>bowls;
        
        char b;
        int leng = str.length();
        int ballcount;
        for(int j=0; j<leng; j++){
            b = str.at(i);
            
        }
        for(int k=0; k<leng; k++){
            //if(b[k]=='N' || b[k]=='W' || b[k]=='D' || b[k]=='O'){
            if(b[k]>=0 && b[k]<=6){
                ballcount++;
            }else{
                
            }
        }
        //int overs;
        if(ballcount<6){

            cout<<ballcount<<" BALLS"<<endl;

        }else if(ballcount==6){
            cout<<"1 OVER"<<endl;
        }else if(ballcount>6){
            cout<<ballcount/6<<" OVER"<<ballcount%6<<" BALL"<<endl;
        }
        
    }

    
    return 0;
}