#include<bits/stdc++.h>
#include <iomanip> //this library need to use setprecision
#include <cmath>
#include <string>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int c=0;
        int over=0;
        int ball=0;
        string bowls;
        cin>>bowls;

        for(int j=0; j<bowls.length(); j++){
            if(bowls[j]!='N' && bowls[j]!='W' && bowls[j]!='D'){
                c++;
            }
        }
        ball=c%6;
        over=c/6;
/* 
        if(c<6){
            cout<<c<<" BALLS"<<endl;
        }else if(c==6){
            cout<<"1 OVER"<<endl;
        }else if(c>6){
            cout<<over<<" OVER "<<ball<<" BALL"<<endl;
        }

         */
        if(ball == 0 && over != 0)
			printf("%d %s\n", over, (over>1)? "OVERS" : "OVER");
		else if(over == 0 && ball != 0)
			printf("%d %s\n", ball, (ball>1)? "BALLS" : "BALL");
		else
			printf("%d %s %d %s\n", over, (over>1)? "OVERS" : "OVER", ball, (ball>1)? "BALLS" : "BALL");
    }



/* 
    for(int i=0; i<n; i++){
        string bowls;
        cin>>bowls;
        
        char b[100];
        int leng = bowls.length();
        int ballcount;
        for(int j=0; j<leng; j++){
            
            char b = bowls.at(j);
            if(b[j]=="0" || b[j]=="1" || b[j]=="2"|| b[j]=="3" || b[j]=="4" || b[j]=="5" || b[j]=="6"){
            //if(b[j]=='0' || b[j]=='1' || b[j]=='2' || b[j]=='3' || b[j]=='4' || b[j]=='5' || b[j]=='6'){
                ballcount++;
            }else{
                
            }
        }
         for(int k=0; k<leng; k++){
            //if(b[k]=='N' || b[k]=='W' || b[k]=='D' || b[k]=='O'){
            if(b[k]=='0' || b[k]=='1' || b[k]=='2' || b[k]=='3' || b[k]=='4' || b[k]=='5' || b[k]=='6'){
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
*/
    
    return 0;
}