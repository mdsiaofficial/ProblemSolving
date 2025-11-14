#include <bits/stdc++.h>
#include <string>
#include <stdlib.h>
using namespace std;
int main(){


    int t;
    cin>>t;

    while(t--){
        string b;
        cin>>b;
        int l=b.length();
        int ball_count=0;
        int over_count=0;
        int w_count=0;
        int run_count=0;
        for(int i=0; i<l; i++){
            ball_count++;
            if(b[i]=='0' || b[i]=='1' || b[i]=='2' || b[i]=='3' || b[i]=='4' || b[i]=='5' || b[i]=='6'){
                //int r = atoi(b[i]);
                //int r = r - '0';
                int r = int(b[i]) - 48;
                run_count=run_count+r;
                if(ball_count==6){
                    over_count++;
                    ball_count=0;
                }
            }else if(b[i]=='W'){
                //ball_count++;
                w_count++;
            }

            if(ball_count==6){
                over_count++;
                ball_count=0;
            }
        }
        cout<< over_count<<"."<<ball_count <<" "<<"Over"<< ((over_count >=1 && ball_count>1) ? "s ":" ")<< run_count<<" "<<"Run"<<(run_count>1? "s " :" ")<< w_count<< " "<<"Wicket"<<(w_count>1 ? "s.":".")<<endl;


    }
}
