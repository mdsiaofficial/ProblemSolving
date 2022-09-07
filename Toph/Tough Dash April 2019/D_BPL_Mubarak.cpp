#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
#include <cmath>
#include <string>
using namespace std;

void main(){

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string bowls;
        cin>>bowls;
        
        char b[100];
        int leng = bowls.length();
        int ballcount;
        for(int j=0; j<leng; j++){

            char b = bowls.at(j);
            if(b[j]=='0' || b[j]=='1' || b[j]=='2' || b[j]=='3' || b[j]=='4' || b[j]=='5' || b[j]=='6'){
                ballcount++;
            }else{
                
            }
        }
        /* for(int k=0; k<leng; k++){
            //if(b[k]=='N' || b[k]=='W' || b[k]=='D' || b[k]=='O'){
            if(b[k]=='0' || b[k]=='1' || b[k]=='2' || b[k]=='3' || b[k]=='4' || b[k]=='5' || b[k]=='6'){
                ballcount++;
            }else{
                
            }
        } */
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